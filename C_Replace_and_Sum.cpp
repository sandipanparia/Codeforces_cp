#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 1), b(n + 1), mx(n + 2), pref(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        mx[n] = max(a[n], b[n]);
        for (int i = n - 1; i >= 1; i--) {
            mx[i] = max({a[i], b[i], mx[i + 1]});
        }

        pref[0] = 0;
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + mx[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1] << " ";
        }
        cout << "\n";
    }
    return 0;
}
