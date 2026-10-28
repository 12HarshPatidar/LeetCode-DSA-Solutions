#include <iostream>
#include <vector>
using namespace std;

int Mount(vector<int> &nums){
    int st = 0, end = nums.size() - 1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
            return mid;
        }

        if(nums[mid] < nums[mid + 1]){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {0,3,4,5,6,8,6,4,3};
    cout << Mount(nums);
}