#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of Nodes: ";
    cin >> n;

    vector<int> G[n+1];
    int b[n+1] = {0};

    // Taking edges as input
    for(int i = 1; i <= n - 1; i++){
        int x, y;
        cout << "Enter the edge between two nodes: ";
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    // Taking node values as input
    cout << "Enter the values for each node: ";
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }

    queue<int> q;
    int used[n+1] = {0};
    int answer[n+1] = {0};

    used[1] = 1;
    q.push(1);
    answer[1] = b[1];

    // BFS traversal
    while (!q.empty()){
        int top = q.front();
        q.pop();
        int c = 0;
        for (int u : G[top]){
            if (used[u] == 0){
                c++;
                used[u] = 1;
                q.push(u);
                answer[u] = (b[u] == 1) ? answer[top] + 1 : answer[top];
            }
        }
    }

    // Printing the answer
    cout << "Output values: " << endl;
    for(int i = 1; i <= n; i++){
        cout << answer[i] << endl;
    }

    return 0;
}
