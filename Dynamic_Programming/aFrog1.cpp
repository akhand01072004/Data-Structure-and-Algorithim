#include<bits/stdc++.h>
using namespace std;

int aFrog1(vector<int> stones){
    int n = stones.size();
    vector<int> dp(n);
    dp[0] = 0;
    dp[1]= abs(stones[0]-stones[1]);
    for(int i=2; i<n; i++){
        dp[i] = min(dp[i-2]+ abs(stones[i-2] - stones[i]), dp[i-1] + abs(stones[i-1] - stones[i] ));
    }
    return dp[n-1];
}
int main(){
    vector<int> stones = {10,30,40,20};
    cout<<aFrog1(stones);
}