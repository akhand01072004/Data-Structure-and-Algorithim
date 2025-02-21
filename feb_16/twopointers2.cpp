#include<bits/stdc++.h>
using namespace std;

int returnSubarrayDistinct(vector<int> nums, int k){
    int n = nums.size();
    int i = 0;
    int sum = nums[i];
    int count = 0;
    for(int j=1; j<n; j++){
        if(nums[i] == nums[j]){
            continue;
        }
        else{
            sum += nums[j];
            while(sum > k){
                sum -= nums[i];
                i++;
            }

            count += (j-i+1);
        }
    }
    return
}