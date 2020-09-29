#include <iostream>

using namespace std;

int raw_group[10] = {9, 2, 3, 4, 4, 5, 6, 7, 8, 9};

bool shell_sort(int raw_group[], int n){
    int tem;
    for(int gap = n/2; gap>=1; gap/=2){
        for(int i=gap; i<n; i++){
                tem = raw_group[i];
                int j=i;
                while(j>0 && raw_group[j-gap]>tem){
                    raw_group[j] = raw_group[j-gap];
                    j = j-gap;
                }
                raw_group[j] = tem;
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
