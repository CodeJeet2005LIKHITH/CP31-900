#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main(){
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
        cout << endl;
    }
    return 0;
}
