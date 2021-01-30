#include <iostream>
#include <vector>

int binSearch(std::vector<int> nums, int tips){
    int right = nums.size();
    int left = 0;
    while (right >= left){
        int mid = (right + left) / 2;
        if(nums[mid] >= tips){
            right = mid -1;
        }
        else{
            left = mid + 1;
        }
    }
    return right + 1;
}
int main(){
    std::vector<int> nums = {1, 2, 3, 4 ,5};
    std::cout<<binSearch(nums, 3);

}