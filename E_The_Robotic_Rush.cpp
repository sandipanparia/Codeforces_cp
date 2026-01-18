#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        string s;
        cin >> s;

        vector<long long> pref(k + 1, 0);
        for (int i = 1; i <= k; i++) {
            pref[i] = pref[i - 1] + (s[i - 1] == 'R' ? 1 : -1);
        }

        unordered_map<long long, int> gdCode;
        gdCode.reserve(k * 2 + 5);
        for (int i = 1; i <= k; i++) {
            if (!gdCode.count(pref[i])) gdCode[pref[i]] = i;
        }

        vector<pair<long long,int>> robots(n);
        for (int i = 0; i < n; i++) robots[i] = {a[i], i};
        sort(robots.begin(), robots.end());
        sort(b.begin(), b.end());

        const int INF = 1e9;
        vector<int> deathTime(n, INF);

        int j = 0;
        for (int i = 0; i < n; i++) {
            long long pos = robots[i].first;
            while (j < m && b[j] < pos - k) j++;
            for (int x = j; x < m && b[x] <= pos + k; x++) {
                long long d = b[x] - pos;
                auto it = gdCode.find(d);
                if (it != gdCode.end()) {
                    deathTime[robots[i].second] = min(deathTime[robots[i].second], it->second);
                }
            }
        }

        vector<int> deaths(k + 2, 0);
        for (int i = 0; i < n; i++) {
            if (deathTime[i] != INF) deaths[deathTime[i]]++;
        }

        vector<int> alive(k + 1);
        int cur = n;
        for (int i = 1; i <= k; i++) {
            cur -= deaths[i];
            alive[i] = cur;
        }

        for (int i = 1; i <= k; i++) cout << alive[i] << " ";
        cout << "\n";
    }
    return 0;
}
