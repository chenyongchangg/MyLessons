#include <iostream>

using namespace std;

int raw_group[10] = {9, 2, 3, 4, 4, 5, 6, 7, 8, 9};

void quick_sort(int s[], int l, int r)
{
    if (l < r)
    {
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
                j--;
            if(i < j)
                s[i++] = s[j];

            while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
                i++;
            if(i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // 递归调用
        quick_sort(s, i + 1, r);
    }
}

bool fast_sort(int raw_group[], int low, int high){
    if(low<high){
        int mid_number = raw_group[low];
        int i = low;
        int j = high;
        //移动交换 直到i=j
        while (i<j){
            while(raw_group[j]>=mid_number && i<j)
                j--;
            if(j>i)
                raw_group[i++] = raw_group[j];

            while(raw_group[i]<mid_number && i<j)
                i++;
            if(j>i)
                raw_group[j--] = raw_group[i];
        }
        raw_group[i] = mid_number;
        fast_sort(raw_group, i+1, high);
        fast_sort(raw_group, low, i-1);
    }
    return true;
}

int main()
{
    fast_sort(raw_group,0, 9);
    for(int i=0; i<10; i++)
        cout<<raw_group[i];
}

