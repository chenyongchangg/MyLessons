## 单例模式

```c++
class Singleton{
private:
    Singleton(){
    }
    Singleton(Singleton &s) = delete;

public:
    static Singleton& getInstance(){
        static Singleton s;//可以写在外面吗
        return s;
    }

};

int main(){
    Singleton& tmp =  Singleton::getInstance();
    Singleton& tmp2 =  Singleton::getInstance();
    Singleton& tmp3 =  Singleton::getInstance();

}
```

