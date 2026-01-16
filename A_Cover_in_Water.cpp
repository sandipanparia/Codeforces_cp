#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>> n ;
        cin>>s;

        bool three_continuous_empty_cells=false;
        int total_count_of_cells=0;
        for(int i=0;i<n;i++){//n
            if(s[i]=='.'&&s[i+1]=='.'&&i+2<n&&s[i+2]=='.'){
                three_continuous_empty_cells=true;
                break;
            }
            if(s[i]=='.')total_count_of_cells++;
        }
        if(three_continuous_empty_cells)cout<<2<<endl;
        else cout<<total_count_of_cells<<endl;
        
    }
    return 0;
}