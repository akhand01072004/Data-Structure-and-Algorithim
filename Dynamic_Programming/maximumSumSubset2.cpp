#include<bits/stdc++.h>
using namespace std;

int maximumSumSubset2(vector<int> n1,vector<int> n2){
    int n= n1.size()-1;
    vector<int> dp(n+1,0);
    dp[0] = max(n1[0],n2[0]);
    dp[1] = max(n1[1],n2[1]); 
    for(int i=2; i<=n; i++){
        dp[i] = max(max(n1[i],n2[i])+dp[i-2],dp[i-1]) ;
    }
    return dp[n];


}

int main(){
    vector<int> n1 = {1,5,3,21234};
    vector<int> n2 = {-4509,200,3,40};
    cout<<maximumSumSubset2(n1,n2);
    return 0;
}