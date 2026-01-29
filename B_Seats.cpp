#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

       int ch=count(s.begin(),s.end(), '1');
       if(ch==0){cout<<(n+2)/3<<"\n";continue;}
       int total=0;
       int f=s.find('1'),l=s.rfind('1');
       total+=(f+1)/3;
       for(int i=f;i<l;){
        int j=i+1,z=0;
        while(j<=l&&s[j]=='0'){++z;++j;}
        total+=z/3;
        i=j;
       }
       total+=(n-1-l+1)/3;
       cout<<ch+total<<endl;
    }
}
