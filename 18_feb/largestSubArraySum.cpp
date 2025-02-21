#include<bits/stdc++.h>
using namespace std;

int largestSubarraySum(vector<int> nums, int k){
    int n = nums.size();
    int largest_subArray = 0;
    int i=0;
    int j=0;
    int sum = 0;
    while(j<n){
        sum += nums[j];
        
        while(sum > k){
            sum -= nums[i];
            i++;
        }
        largest_subArray = max(largest_subArray,(j-i+1));
        j++;
    }
    return largest_subArray;
}
int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int k=10;
    cout<<largestSubarraySum(nums,k);
}