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
        int op=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
                int diff=a[i+1]-a[i];
                int req_op=(diff/2)+1;
                op=min(op,req_op);
            }
            else{
                op=0;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}