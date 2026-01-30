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
        int k=0;int l=0;
        for(int i=0;i<n;i++){
            if(a[i]==-1)l++;
            else k++;
        }
        int op=0;
        while(k<l||l%2==1){
            l--;
            k++;
            op++;
        }
        cout<<op<<endl;
    }
    return 0;
}