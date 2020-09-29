#include <iostream>

using namespace std;

int raw_group[10] = {9, 2, 3, 4, 4, 5, 6, 7, 8, 9};

bool insert_sort(int raw_group[], int n){
    int tem;
    for(int i=1; i<n; i++){
        if(raw_group[i]<raw_group[i-1]){//可以插入
            tem = raw_group[i];
            int j = i;
            while(j>0 && raw_group[j-1]>tem){
                raw_group[j] = raw_group[j-1];
                j--;
            }
            raw_group[j] = tem;
        }
        else{
            //无需插入
        }
    }
    return true;
}

int main()
{
    insert_sort(raw_group,10);
    for(int i=0; i<10; i++)
        cout<<raw_group[i];
}


