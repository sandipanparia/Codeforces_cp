#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int zeros = 0;
        for (char c : s) {
            if (c == '0') zeros++;
        }

        // Check if already sorted
        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << "Bob\n";
            continue;
        }

        vector<int> indices;
        for (int i = 0; i < n; i++) {
            if (i < zeros && s[i] == '1') indices.push_back(i + 1);
            if (i >= zeros && s[i] == '0') indices.push_back(i + 1);
        }

        cout << "Alice\n";
        cout << indices.size() << "\n";
        for (int x : indices) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
