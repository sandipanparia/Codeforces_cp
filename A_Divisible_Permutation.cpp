#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
       vector<int>a(n+1),b(n+1,1);
       int l=n;
       a[n]=l;b[l]=0;
       for(int i=n-1;i>=1;--i){
        int r=a[i+1]%i,x=0;
        for(int v=n;v>=1;--v)if(b[v]&&v%i==r){x=v;break;}
        a[i]=x;b[x]=0;
       }
       for(int i=1;i<n+1;i++)cout<<a[i]<<(i==n?'\n':' ');
    }
    return 0;
}
