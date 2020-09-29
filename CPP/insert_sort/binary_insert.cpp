#include <iostream>

using namespace std;

int raw_group[10] = {9, 8, 7, 4, 4, 5, 0, 7, 8, 9};

bool binary_sort(int raw_group[], int n){
    int low;
    int high;
    int mid;
    int tem;
    for(int i=1; i<n; i++){ //i 插入到 0-i-1里面
        if(raw_group[i]<raw_group[i-1]){
            tem = raw_group[i];
            low = 0;
            high = i-1;
            while(low<=high){
                mid = (low+high)/2;
                if(raw_group[i]<raw_group[mid])
                    high = mid-1;
                else
                    low = mid+1;
            }
            //high+1
            //移动
            for(int j=i; j>high+1; j--){
                raw_group[j] = raw_group[j-1];
            }
            raw_group[high+1] = tem;
        }
        for(int k=0; k<10; k++)
            cout<<raw_group[k];
        cout<<endl;
    }

    return true;
}
int main()
{
    binary_sort(raw_group, 10);
    for(int i=0; i<10; i++)
        cout<<raw_group[i]<<endl;
    return 0;
}


