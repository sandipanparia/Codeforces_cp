#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> &a, int n) {
    vector<int> present(n + 2, 0);
    for (int x : a) {
        if (x <= n) present[x] = 1;
    }
    for (int i = 0; i <= n; i++) {
        if (!present[i]) return i;
    }
    return n + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int M = mex(a, n);
        int cnt0 = 0;
        for (int x : a) {
            if (x == 0) cnt0++;
        }

        if (M == 0) {
            cout << "NO\n";
        }
        else if (M == 1) {
            if (cnt0 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0;
}
