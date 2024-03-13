#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    int count = 0;
    for(long long i=1; i <= n; i++){
        if(n%i != 0)break;
        count++;
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