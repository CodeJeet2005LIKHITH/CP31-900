#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    // ll n;
    // cin>>n;
    // unordered_map<ll,ll>mp;
    // ll maxSame = 1;
    // for(int i=0;  i < n; i++){
    //     int x;
    //     cin>>x;
    //     mp[x]++;
    //     maxSame = max(maxSame,mp[x]);
    // }
    // if(maxSame == n){
    //     cout<<0;
    //     return;
    // }
    // ll move = 0;
    // ll target = n-maxSame;
    // ll ans = 0;
    // while(target > 0){
    //     move++;
    //     target -= maxSame*move;
    //     ans += 1+(maxSame*move);
    // }
    // ans += target;
    // cout<<ans;
    // Simplifying the approach
    ll n;
    cin>>n;
    unordered_map<ll,ll>mp;
    ll maxSame = 1;
    for(int i=0; i < n; i++){
        ll temp;
        cin>>temp;
        mp[temp]++;
        maxSame = max(maxSame,mp[temp]);
        // Now we have the maximum repating one
    }
    if(maxSame == n){
        cout<<0;
        return;
    }
    ll count = 0;
    while(maxSame <= n){
        count++;
        if(maxSame*2 >= n){
            count +=(n-maxSame);
            break;
        }
        count += maxSame;
        maxSame *= 2;
    }
    cout<<count;


}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}