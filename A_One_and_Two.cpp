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
      int total=0;
      for(int k=0;k<n;k++){
        if(a[k]==2)total++;
      }
      if(total==0)cout<<1<<endl;
      else if(total%2==1)cout<<-1<<endl;
      else{
        int cc=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]==2)cc++;
            if(cc==total/2){c=i;break;}
        }
        cout<<c+1<<endl;
      }
    
    }
    return 0;
}
