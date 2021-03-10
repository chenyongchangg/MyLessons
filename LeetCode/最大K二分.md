### 最大K



```c++


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void visit(int nums[], int left, int right){
    for(int i = left; i <= right; i ++){
        cout<<nums[i];
        cout<<' ';
    }


    cout<< "fi"<<endl;
}
int partition(int nums[], int begin, int end){
    if(begin<end){
        int tBegin = begin, tEnd = end;
        int midNum = nums[begin];
        visit(nums,0,end);
        while(tBegin < tEnd){
            while(tBegin < tEnd && nums[tEnd] >= midNum)
                tEnd--;
            if(tEnd > tBegin)
                nums[tBegin++] = nums[tEnd];
            while(tBegin < tEnd && nums[tBegin] < midNum)
                tBegin++;
            if(tBegin < tEnd)
                nums[tEnd--] = nums[tBegin];

        }


        nums[tBegin] = midNum;
        visit(nums, begin, end);
        return begin;
    }

}
int main() {
    int n[11] = {2 ,3, 3 ,1, 4 ,5, 10 ,4 ,8 ,9 };
    partition(n,0,9);
    return 0;
}

```



