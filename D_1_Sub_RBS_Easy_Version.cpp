#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     string s;
     cin>>n>>s;
     int totalopen=0;
     for(char c: s){
        if(c=='(')totalopen++;
     }
     bool ok=false;
     int leftopen=0;
     for(int i=0;i<n-1;i++){
        int rightOpen=totalopen-leftopen;
        if(s[i]==')'&&s[i+1]=='('&&rightOpen>=2){
            ok=true;
            break;
        }
        if(s[i]=='(')leftopen++;
     }
     if(ok)cout<<n-2<<endl;
     else cout<<-1<<endl;
    }
    return 0;
}
// tc--->nlon