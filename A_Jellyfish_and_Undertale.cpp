#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      
     long long n,a,b;
     cin>>a>>b>>n;
     long long arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     long long max=0;
     for(int i=0;i<n;i++){
        max+=min(arr[i],a-1);
     }
     cout<<max+b<<endl;
     
      
    
    }
    return 0;
}
