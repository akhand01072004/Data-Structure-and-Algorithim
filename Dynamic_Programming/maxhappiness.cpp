#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n;
    cin >> n;
    ll a[n + 1], b[n + 1], c[n + 1];

    for (ll i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    ll dpa[n + 1] = {0};
    ll dpb[n + 1] = {0};
    ll dpc[n + 1] = {0};

    dpa[1] = a[1];
    dpb[1] = b[1];
    dpc[1] = c[1];

    for (ll j = 2; j <= n; j++) {
        dpa[j] = a[j] + max(dpb[j - 1], dpc[j - 1]);
        dpb[j] = b[j] + max(dpa[j - 1], dpc[j - 1]);
        dpc[j] = c[j] + max(dpa[j - 1], dpb[j - 1]);
    }

    cout << max({dpa[n], dpb[n], dpc[n]});
    return 0;
}
