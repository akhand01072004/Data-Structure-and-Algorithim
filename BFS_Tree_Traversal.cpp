#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number of nodes: ";
    cin >> n;
    vector<int> G[n + 1];

    int i = 1;
    while (i <= n - 1) {
        int x, y;
        cout << "Enter your x and y: ";
        cin >> x >> y; // ✅ Fixed Input Issue
        G[x].push_back(y);
        G[y].push_back(x);
        i++;
    }

    queue<int> q;
    int used[n + 1] = {0};
    used[1] = 1;
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        int c = 0;

        for (int v : G[u]) {
            if (used[v] == 0) {
                c++;
                used[v] = 1;
                q.push(v);
            }
        }
        cout << u << " " << c << endl;
    }
    return 0;
}

// sabse badhiya hai to traverse a tree using bfs 