#### [剑指 Offer 16. 数值的整数次方](https://leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/)

> 实现函数double Power(double base, int exponent)，求base的exponent次方。不得使用库函数，同时不需要考虑大数问题。
>
>  
>
> 示例 1:
>
> 输入: 2.00000, 10
> 输出: 1024.00000
> 示例 2:
>
> 输入: 2.10000, 3
> 输出: 9.26100
> 示例 3:
>
> 输入: 2.00000, -2
> 输出: 0.25000
> 解释: 2-2 = 1/22 = 1/4 = 0.25

```c++
class Solution {
public:
    double myPow(double x, int n) {
        if(abs(x - 0.0) <= 0.00001 && n < 0) return 1/x;
        int flag = 0;
        if(n < 0) flag = 1;
        double ans = pow(x, abs(n));
        if(flag) ans = 1 / ans;
        return ans;

    }
    double pow(double x, unsigned int n){
        if(n == 0) return 1;
        if(n == 1) return x;
        double ans = pow(x, n>>1);
        ans *= ans;
        if(n & 0x1 == 1){
            ans *= x;
        }
        return ans;
    }
};
```

> 总结：　考虑到所有情况，包括x（负　正　０）和ｎ（负　正　０），同时用迭代公式加快运算
>
> f (n) = f (n/2) * f (n/2)                                     n 是偶数
>
> f (n) = f (n/2) * f (n/2)　× base　                  n是奇数

