#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        // Prefix sums of b
        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + b[i - 1];
        }

        sort(a.begin(), a.end());

        long long ans = 0;

        // Iterate over unique values of a
        for (int i = 0; i < n; ) {
            long long x = a[i];
            int j = i;
            while (j < n && a[j] == x) j++;

            long long m = n - i; // swords >= x
            int k = upper_bound(pref.begin(), pref.end(), m) - pref.begin() - 1;

            ans = max(ans, x * 1LL * k);
            i = j;
        }

        cout << ans << "\n";
    }
    return 0;
}
