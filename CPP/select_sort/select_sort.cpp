#include <iostream>

using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        //find minimum
        int min_index = i;
        for(int j=i; j<n; j++){
            if(arr[min_index]>arr[j])
                min_index = j;
        }
        //swap
        int tem = arr[i];
        arr[i] = arr[min_index];
        min_index = tem;
    }
}

int main() {
    int raw_group[10] = {9, 2, 3, 4, 4, 5, 6, 7, 8, 9};
    selection_sort(raw_group, 10);
    for(int i=0; i<10; i++)
        cout<<raw_group[i];
    return 0;
}

