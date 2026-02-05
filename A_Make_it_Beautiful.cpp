#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      int min=a[0];
      int max=a[n-1];
      if(max==min){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        cout<<max<<" ";
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
      }
      
    
    }
    return 0;
}
