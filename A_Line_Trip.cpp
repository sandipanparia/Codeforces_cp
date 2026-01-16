#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long>points_arr;
        points_arr.push_back(0);
        for(int i=0;i<n;i++){
            long long points;
            cin>>points;
            points_arr.push_back(points);
        }
        points_arr.push_back(x);
        n=points_arr.size();
        long long max_dis_bet_tow_gas_station=INT_MIN;
        for(int i=1;i<n;i++){
            if(i==n-1){
                max_dis_bet_tow_gas_station=max(max_dis_bet_tow_gas_station,2*(points_arr[i]-points_arr[i-1]));
            }
            else{
                max_dis_bet_tow_gas_station=max(max_dis_bet_tow_gas_station,points_arr[i]-points_arr[i-1]);
            }
        }
        cout<< max_dis_bet_tow_gas_station<<endl;
        
    }
    return 0;
}