#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){c++;maxi=max(maxi,c);}
            else c=0;
        }
        cout<<maxi<<endl;
    }
    return 0;
}
