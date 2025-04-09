#include<bits/stdc++.h>
using namespace std;

int maximumSumSubset(vector<int> nums){
    int n= nums.size()-1;
    vector<int> dp(n+1,0);
    dp[0] = max(0,nums[0]);
    dp[1] = max(nums[1],nums[0]); 
    for(int i=2; i<=n; i++){
        dp[i] = max((nums[i] + dp[i-2]),dp[i-1]) ;
    }
    return dp[n];


}

int main(){
    vector<int> nums = {2,4,6,7,8};
    cout<<maximumSumSubset(nums);
    return 0;
}