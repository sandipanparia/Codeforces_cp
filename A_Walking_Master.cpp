#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       int sx,sy,dx,dy;
       cin>>sx>>sy>>dx>>dy;
     
       if(sy>dy) {cout<<-1<<endl;continue;}
       int m=dy-sy;
       sx+=m;
       if(dx>sx){cout<<-1<<endl;continue;}
       m+=sx-dx;
       cout<<m<<endl;

    }
    return 0;
}
