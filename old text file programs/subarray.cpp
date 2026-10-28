#include<iostream>
#include<vector>
#include<map>

using namespace std;

int subarr(vector<int> nums,int j){
    map<int,int> m;
    int n = nums.size();
    int minarr = INT_MAX;
    for(int i = 1;i < n;i++){
        nums[i] += nums[i-1];
    }
    int target = nums[n-1] % j;
    if(target == 0){
        return 0;
    }
    cout << target << endl;

    for(int i = 0;i < n;i++){
        if(nums[i] == target){
            minarr = min(minarr,i);
        }else if(m.find(nums[i] - target) != m.end()){
            cout << i << endl;
            cout << m[target - nums[i]];
            minarr = min((i - m[nums[i] - target]),minarr);
        }else{ 
            m[nums[i]] = i;
        }
    }
    return minarr;
}

int main(){
    vector<int> nums = {6,3,5,2};
    int j = 9;
    cout << subarr(nums,j);
}