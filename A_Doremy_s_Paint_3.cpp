#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){ //n
            cin>>a[i];
        }
        map<int ,int>freq;
        for(int i=0;i<n;i++){   //n
            freq[a[i]]++;  //logn
        }
        //nlog(n)
        if(freq.size()>=3){
            cout<<"No"<<endl;
        }
        else{
        int f1=freq.begin()->second;
        int f2=freq.rbegin()->second;
        if(f1==f2){
            cout<<"Yes"<<endl;
        }
        else if(n%2==1&&abs(f1-f2)==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        }

    }
 
    return 0;
}
//tc--->O(1)
//sc--->O(1)