#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int longestValidSubstring(string s, int k) {
    int n = s.size();
    multiset<char> g;
    int p = 0;

    for (int i = 0, j = 0; j < n; j++) { // ✅ Corrected for loop
        g.insert(s[j]);

        while (!g.empty() && (*g.rbegin() - *g.begin()) > k) {
            g.erase(g.find(s[i]));
            i++;
        }

        p = max(p, j - i + 1);
    }
    return p;
}

int main() {
    string s = "abcdabc"; // Example input
    int k = 2;
    cout << longestValidSubstring(s, k) << endl;
    return 0;
}
