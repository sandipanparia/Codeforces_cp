#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]==67){flag=1;break;}
        
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    } 
    return 0;
}
