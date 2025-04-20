#include<bits/stdc++.h>
using namespace std;

void ValidSubstring(string str, int k){
    int n = str.length();
    vector<int> dp(n,1);
    int max_len = 1;
    int max_index = 0;

    for(int i=1; i<n; i++){
        if(abs(str[i] - str[i-1]) <= k){
            dp[i] = 1 + dp[i-1];
        }else{
            dp[i] = 1;
        }

        if(dp[i]>max_len){
            max_len = dp[i];
            max_index = i;
        }
    }
    int start_index = max_index - max_len + 1;
    cout<< str.substr(start_index,max_len)<<endl;
}

int main(){
    string str = "ababbaca";
    int k = 1;
    ValidSubstring(str, k);
}