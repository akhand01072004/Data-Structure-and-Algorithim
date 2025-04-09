#include<bits/stdc++.h>
using namespace std;

int mini(int a, int b, int c){
    return min(a,min(b,c));
}

int solve(int x){
    vector<int> dp(x+1,0);
    dp[1] = 0;
    dp[2] = 1;
    for(int i=3; i<=x; i++){
        if(i % 7 == 0){
            dp[i] = mini(dp[i-1]+1,dp[i-2]+1,dp[i/7]+1);
        }else{
            dp[i] = min(dp[i-1]+1,dp[i-2]+1);
        }
    }
    return dp[x];


}

int main(){
    int x = 93;
    cout<<"Minimum number of steps required to make the given number to 1 "<<solve(x);
    return 0;
}