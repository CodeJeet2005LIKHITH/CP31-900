#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    // => Giving TLE
    // long long n, q;
    // cin >> n >> q;
    // vector<long long> arr(n, 0);
    // long long sum = 0;
    // for (long long i = 0; i < n; i++) {
    //     cin >> arr[i];
    //     sum += arr[i];
    // }
    // // sum niklao
    // long long temp = sum;
    // while (q--) {
    //     long long l, r, k;
    //     cin >> l >> r >> k;
    //     // Loop chalao
    //     for (long long i = l - 1; i < r; i++) { 
    //         sum = sum - arr[i] + k; 
    // we need optimize some where here let us suppose if r-l value is big you cannot do any thing here comes
    // the concept of prefix array
    //     }
    //     if (sum % 2 == 0)
    //         cout << "NO" << endl; 
    //     else
    //         cout << "YES" << endl; 
    //     sum = temp;
    // }
    // We should use no of even odd kind of concept
    // 2+3 Even+odd = odd
    // 3 + 3 Odd+Odd = Even
    // 4+4 Even+Even = Even
    // Not able to draw any relation    
    ll n,q;
    cin>>n>>q;
    ll sum = 0;
    vector<ll>prefix(n,0);
    // Making prefix array
    for(ll i =0; i < n; i++){
        ll x;
        cin>>x;
        sum+=x;
        if(i > 0)prefix[i] = prefix[i-1]+x;
        else prefix[i] = x;
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        // getting that sum 
        // sum between r-1 and l-1
        l--;
        r--;

        ll x = prefix[r];
        if(l != 0){
            x = prefix[r]-prefix[l-1];
        }
        // us part ka sum milgaya
        // what will replace us part ka elements with some k
        ll y = k*(r-l+1);
        ll ans = sum-x+y;
        if(ans%2 == 0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    

}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}

