#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        // mark which numbers exist in array
        vector<bool> exists(n + 1, false);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            exists[a[i]] = true;
        }

        // answer array, -1 means impossible
        vector<int> ans(n + 1, -1);

        // BFS from 1 (if 1 exists)
        if (exists[1]) {
            queue<int> q;
            q.push(1);
            ans[1] = 1; // need 1 element (1 itself)

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                // multiply u with any number x that exists
                for (int v = u; v <= n; v += u) {
                    int x = v / u;
                    if (!exists[x]) continue;
                    if (ans[v] != -1) continue;

                    ans[v] = ans[u] + 1;
                    q.push(v);
                }
            }
        }

        // print answer for each i from 1 to n
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
