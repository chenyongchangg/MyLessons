#include <iostream>

using namespace std;

int raw_group[10] = {9, 2, 3, 4, 4, 5, 6, 7, 8, 9};
bool swap(int raw[], int low, int high){
    int tem = raw[low];
    raw[low] = raw[high];
    raw[high] = tem;
    return true;
}

bool bubble_sort(int raw_group[], int n){
    for(int i=1; i<n; i++){
        for(int j = i;j>=0;j--){
            if(raw_group[j]<raw_group[j-1]){
                swap(raw_group, j-1, j);
            }
        }
    }
    return true;
}

int main()
{
    bubble_sort(raw_group,10);
    for(int i=0; i<10; i++)
        cout<<raw_group[i];
}
