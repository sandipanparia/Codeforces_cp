#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long k;
        vector<int>a(n);
        cin>>k;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int op=0;int ans=0;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<=k){op++;ans=max(op,ans);}
            else op=0;
        }
        cout<<n-ans-1<<endl;

    }
    return 0;
}