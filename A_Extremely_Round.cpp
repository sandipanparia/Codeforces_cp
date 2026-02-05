#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    int digit=0;
    int zero=0;
    while(n){
        if(n%10==0)zero++;
        digit++;
        n/=10;
    }
    return zero==digit-1;
}
int main() {
    vector<int>round_num;
    for(int i=1;i<=999999;i++){
        if(check(i)){
            round_num.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int ans=0;
      for(int i=0;i<round_num.size();i++){
        if(round_num[i]<=n)ans++;
        else break;
      }
      cout<<ans<<endl;
      
    
    }
    return 0;
}
