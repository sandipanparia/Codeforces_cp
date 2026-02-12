#include <bits/stdc++.h>
using namespace std;

    int main() {
        int t;
        cin>>t;
        while(t--){
            int n,q;
            cin>>n>>q;
            vector<int>a(n);
            long long sum=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                
            }
            for(int i=0;i<n;i++){
                sum+=a[i];
                
            }

            vector<long long>prefix(n+1,0);
            for(int i=1;i<=n;i++){
                prefix[i]=prefix[i-1]+a[i-1];
            }
            while(q--){
                long long l,r,k;
                cin>>l>>r>>k;
                long long remove=prefix[r]-prefix[l-1];
                long long add=(r-l+1)*k;
                long long tot=sum-remove+add;
                if(tot%2==1)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;

            }
        } 
        return 0;
    }
