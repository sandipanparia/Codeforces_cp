#include <bits/stdc++.h>
using namespace std;

void s() {
    int n;
    cin >> n;
    vector<int> a(n);
    int x = 2e9;
    int y = -2e9;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < x) x = a[i];
        if (a[i] > y) y = a[i];
    }

    bool f = true;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i+1]) {
            f = false;
            break;
        }
    }

    if (f) {
        cout << "-1\n";
        return;
    }

    vector<int> b = a;
    sort(b.begin(), b.end());

    int l = 1, r = 1000000000; 
    int k = 1;

    while (l <= r) {
        int m = l + (r - l) / 2;
        
        long long u = (long long)y - m;
        long long v = (long long)x + m;
        
        bool p = true;
        
        if (u < v) {
            for (int i = 0; i < n; ++i) {
                if (a[i] > u && a[i] < v) {
                    if (a[i] != b[i]) {
                        p = false;
                        break;
                    }
                }
            }
        }
        
        if (p) {
            k = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << k << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        s();
    }
    return 0;
}