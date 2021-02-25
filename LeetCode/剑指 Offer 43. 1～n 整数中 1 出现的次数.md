#### [剑指 Offer 43. 1～n 整数中 1 出现的次数](https://leetcode-cn.com/problems/1nzheng-shu-zhong-1chu-xian-de-ci-shu-lcof/)

> 输入一个整数 n ，求1～n这n个整数的十进制表示中1出现的次数。
>
> 例如，输入12，1～12这些整数中包含1 的数字有1、10、11和12，1一共出现了5次。
>

```c++

class Solution {
public:
    int countDigitOne(int n) {
        int tmp = n;
        int low = 1;
        long long base = 10;
        int high = n / base;
        int counter = 0;
        int cur = n % base;
        //first
        if(cur == 0) counter += (n / 10);
        else counter += (n / 10) + 1;
        tmp /= 10;
        base *= 10;
        cout<<counter<<endl;
        //mid
        while(tmp / 10){
            high = n / base;
            low = n % (base / 10);
            cur = tmp % 10;
            if(cur == 0) counter += high * (base / 10);
            else if(cur == 1) counter += high * (base / 10) + low + 1;
            else counter += (high + 1) * (base / 10);
            tmp /= 10;
            base *= 10;
            cout<<"d"<<endl;
        }
        //last
        if(tmp == 1) counter +=1 + n % (base / 10);
        else if(tmp > 1) counter +=  (base / 10);
        cout<<counter<<endl;
        return counter;
    }
};

```



```c
从低到高遍历　然后其他排列组合，特殊情况有　０　１　其他，最高最低要特殊处理
```

