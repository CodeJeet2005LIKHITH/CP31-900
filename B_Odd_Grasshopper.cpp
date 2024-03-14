// Bhai chaliye bhai shuru karthe hain
#include<bits/stdc++.h>
using namespace std;
//o(n) solution giving Time limit exceeded
// void solve(){
//     long long x0,n;
//     cin>>x0>>n;
//     for(long long i=1; i <= n; i++){
//         if(x0%2 == 0){
//             x0 -= i;
//         }
//         else{
//             x0 += i;
//         }
//     }
//     cout<<x0;
// }
void solve(){
    long long x,n;
    cin>>x>>n;
    // Even condition
    long long ans = 0;
    if(x%2 == 0){
        if(n%4 == 0){
            ans = x;
        }
        else if(n%4 == 1){
            ans = x-n;
        }
        else if(n%4 == 2){
            ans = x+n-(n-1);
        }
        else{
            ans = x+n+(n-1)-(n-2);
        }
    }
    else{
        
        if(n%4 == 0){
            ans = x;
        }
        else if(n%4 == 1){
            ans = x+n;
        }
        else if(n%4 == 2){
            ans = x-n+(n-1);
        }
        else{
            ans = x-n-(n-1)+(n-2);
        }
    }
    cout<<ans;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}