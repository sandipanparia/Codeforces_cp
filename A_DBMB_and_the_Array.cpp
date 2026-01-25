#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int s,x;
        cin>>s>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum>s)cout<<"NO"<<endl;
        else if((s-sum)%x==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
