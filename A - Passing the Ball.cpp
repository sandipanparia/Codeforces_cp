#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        vector<bool> visited(n, false);
        int cur = 0;              
        visited[cur] = true;
 
        for (int i = 0; i < n; i++) {
            if (s[cur] == 'R') cur++;
            else cur--;
            visited[cur] = true;
        }
 
        int ans = 0;
        for (bool x : visited) {
            if (x) ans++;
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}
