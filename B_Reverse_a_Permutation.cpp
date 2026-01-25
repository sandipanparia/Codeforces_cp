#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        // suffix maximum array
        vector<int> sufMax(n);
        sufMax[n - 1] = p[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            sufMax[i] = max(p[i], sufMax[i + 1]);
        }

        bool done = false;

        for (int i = 0; i < n && !done; i++) {
            // agar suffix ka max current element se bada hai
            if (sufMax[i] > p[i]) {
                int mx = sufMax[i];
                int pos = -1;

                // mx ka last position dhundo (i se n-1 tak)
                for (int j = n - 1; j >= i; j--) {
                    if (p[j] == mx) {
                        pos = j;
                        break;
                    }
                }

                // reverse [i, pos]
                reverse(p.begin() + i, p.begin() + pos + 1);
                done = true;
            }
        }

        // output
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
