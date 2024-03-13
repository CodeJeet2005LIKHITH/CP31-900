
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
// Total-Longest condition following substring = answer
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n,0);
    for(ll i=0; i < n; i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll count = 1;
    ll maxi = 0;
    for(ll i=1; i < arr.size(); i++){
        if(arr[i]-arr[i-1] <= k)count++;
        else{
            maxi = max(count,maxi);
            count = 1;
        }
    }
    maxi = max(count,maxi);
    cout<<n-maxi;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}