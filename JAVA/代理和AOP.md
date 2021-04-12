代理是运行时动态创建对象的能力，实现handle类，在里面规定代理方法（或全部代理），返回生产的新对象，接口接受调用就可以实现功能增强。

```java


public interface Buy {
    void methodA();
    void methodB();
}

public class BuyImpl implements Buy{
    @Override
    public void methodA() {
        System.out.println("A");
    }

    @Override
    public void methodB() {
        System.out.println("B");
    }
}
public class MyHandler implements InvocationHandler {
    Object target;
    public MyHandler(Object target){
        this.target = target;
    }
    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        Object res = null;
        System.out.println("calling");
        res = method.invoke(target, args);
        return res;
    }
}

public class MyApp {
    public static void main(String[] args) {
        BuyImpl buy = new BuyImpl();
        MyHandler myHandler = new MyHandler(buy);
        Buy  proxy = (Buy) Proxy.newProxyInstance(
                buy.getClass().getClassLoader(),
                buy.getClass().getInterfaces(),
                myHandler
        );
        proxy.methodA();
    }
}
```

