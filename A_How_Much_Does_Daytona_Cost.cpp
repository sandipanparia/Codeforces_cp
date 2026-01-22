#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int present=0;
        for(int i=0;i<n;i++){
            if(a[i]==k){
                present=1;
                break;
            }
        }
        if(present)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
    return 0;
}
