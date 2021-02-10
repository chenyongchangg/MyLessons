#### [剑指 Offer 17. 打印从1到最大的n位数](https://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof/)

> 输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
>
> 示例 1:
>
> 输入: n = 1
> 输出: [1,2,3,4,5,6,7,8,9]
>
>
> 说明：
>
> 用返回一个整数列表来代替打印
> n 为正整数
>
> 来源：力扣（LeetCode）
> 链接：https://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof
> 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

```c++

class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> ret;
    if(n < 1) return ret;
    //init
    char *number = new char[n + 1];
    
    number[n] = '\0';
    for(int i = 0; i < n; i++) number[i] = '0';
    while(!increment(number, n)){
        ret.push_back(stoi(number));
    }
    return ret;

    }
    bool increment(char* number, int n){
    bool isOverFlow = false;
    int ac = 0;
    number[n - 1] += 1;
    for(int i = n - 1; i >= 0; i--){
        number[i] += ac;
        ac = 0;
        if(number[i] > '9'){
            number[i] -= 10;
            ac = 1;
            if(i == 0) isOverFlow = true;
        }
    }
    return isOverFlow;

}


};

```

```c++
class Solution {
public:
vector<int> ret;
    vector<int> printNumbers(int n) {
    if (n < 1) return ret;
    //init
    char *number = new char[n + 1];
    number[n] = '\0';
    printNumber(number, n, 0);
    ret.erase(ret.begin());
    return ret;
    }
void printNumber(char * number, int n, int s) {
    if(s == n)  //add to vector
    {
        ret.push_back(stoi(number));
        return ;
    }
    for(int i = 0; i < 10; i++){
        number[s] = '0' + i;
        printNumber(number, n, s + 1);
    }

}



};
```



> 第一种方法是大数模拟加法　第二种是dfs全排列