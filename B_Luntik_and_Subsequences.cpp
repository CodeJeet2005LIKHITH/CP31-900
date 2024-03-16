// Pnc ka revision hogaya bhai log
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    // Storing the values in the map
    map<int,int>mp;
    for(int i=0; i < n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    if(mp[1] == 0){
        cout<<0;
        return;
    }
    else if(mp[0] == 0){
        cout<<mp[1];
    }
    else{
        int zeroans = pow(2,mp[0])-1;
        cout<<mp[1]*(1+zeroans);
    }
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}