#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            int op=0;int ans=0;
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1])op++;
                else op=0;
                ans=max(ans,op);
            }
            cout<<ans+2<<endl;
        }    
    return 0;
}