#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4||n%2==1)cout<<-1<<endl;
        else{
            long long minbuses=(n + 5) / 6;
            long long maxbuses=n/4;
            cout<<minbuses<<" "<<maxbuses<<endl;
        }

    } 
    return 0;
}
