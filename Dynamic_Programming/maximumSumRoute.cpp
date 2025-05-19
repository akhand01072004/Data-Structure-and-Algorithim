#include <bits/stdc++.h>
using namespace std;

int maximumSumRoute(vector<int> route) {
    int n = route.size();
    vector<int> dp(n);
    
    dp[0] = route[0];
    if (n > 1) dp[1] = dp[0] + route[1];
    if (n > 2) dp[2] = dp[1] + route[2];
    if (n > 3) dp[3] = max(dp[2] + route[3], dp[0] + route[3]);
    if (n > 4) dp[4] = max(dp[3] + route[4], dp[1] + route[4]);

    for (int i = 5; i < n; i++) {
        dp[i] = max({dp[i - 1] + route[i], dp[i - 3] + route[i], dp[i - 5] + route[i]});
    }

    return dp[n - 1];
}

int main() {
    vector<int> route = {5, 8, 3, 100, -5, -5, 5, 10};
    cout << maximumSumRoute(route);
    return 0;
}
