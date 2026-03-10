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
        string s;
        cin >> s;

        vector<int> pos; 

        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                pos.push_back(i + 1); 
        }

        int ones = pos.size();

     
        if (ones == 0) {
            cout << 0 << endl;
            continue;
        }


        if (n % 2 == 0) {
            cout << ones << endl;
            for (int x : pos)
                cout << x << " ";
            cout << endl;
            continue;
        }

     
        if (ones == 2) {
            cout << 2 << endl;
            cout << pos[0] << " " << pos[1] <<endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}