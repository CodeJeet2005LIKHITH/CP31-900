// Bhai you need to know about properties of gcd
// gcd(a,b) ===> maximum possible gcd will be a-b

#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a == b)cout<<0<<" "<<0;
    else{
        ll res1 = abs(a-b);
        ll res2 = a%(a-b);
        res2 = min(res2,abs(res1-res2));
        cout<<res1<<" "<<res2;
    }

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
    
}