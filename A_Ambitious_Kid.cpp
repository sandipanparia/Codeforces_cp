#include<bits/stdc++.h>
using namespace std;
int main(){

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,abs(arr[i]));
        }
        cout<<ans<<endl;
    
    return 0;
}
//tc--->o(n)
//sc--->o(n)