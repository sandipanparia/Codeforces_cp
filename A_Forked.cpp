#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      
      int a,b;
      cin>>a>>b;
      int kx,ky,qx,qy;
      cin>>kx>>ky;cin>>qx>>qy;
      int dx[4]={1,-1,-1,1};
      int dy[4]={1,1,-1,-1};
      set<pair<int,int>>k,q;
      for(int i=0;i<4;i++){
        k.insert({kx+dx[i]*a,ky+dy[i]*b});
        k.insert({kx+dx[i]*b,ky+dy[i]*a});


        q.insert({qx+dx[i]*a,qy+dy[i]*b});
        q.insert({qx+dx[i]*b,qy+dy[i]*a});
      }

      int ans=0;
      for(auto position:k){
        if(q.find(position)!=q.end())ans++;
      }
      cout<<ans<<endl;
      
    
    }
    return 0;
}
