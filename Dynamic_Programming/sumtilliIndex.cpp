#include<bits/stdc++.h>
using namespace std;

void sumTilliIndex(vector<int> nums, vector<int> queries){
    int n= nums.size();
    int q = queries.size();
    vector<int> dp(n+1,0);
    dp[0] = nums[0];
    for(int i=1; i<n; i++){
        dp[i] = dp[i-1] + nums[i];
    }
    for(int j=0; j<q; j++){
        cout<<dp[queries[j]]<<endl;
    }


}

int main(){
    vector<int> nums = {6,7,3,2,2};
    vector<int> queries = {0,3,4,2};
    sumTilliIndex(nums,queries);
    return 0;
}