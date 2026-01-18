#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> orig(n);
        for (int i = 0; i < n; i++) cin >> orig[i];

        vector<long long> cur(n, 0);
        vector<int> ver(n, 0);
        int reset_ver = 1;

        auto getVal = [&](int idx) -> long long {
            if (ver[idx] != reset_ver) return orig[idx];
            return cur[idx];
        };

        auto setVal = [&](int idx, long long val) {
            ver[idx] = reset_ver;
            cur[idx] = val;
        };

        for (int i = 0; i < m; i++) {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            long long val = getVal(b) + c;
            if (val > h) {
                // crash -> reset
                reset_ver++;
            } else {
                setVal(b, val);
            }
        }

        for (int i = 0; i < n; i++) {
            cout << getVal(i) << " ";
        }
        cout << "\n";
    }

    return 0;
}
