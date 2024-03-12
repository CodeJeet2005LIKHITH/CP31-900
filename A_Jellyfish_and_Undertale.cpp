/*                                   || श्री राम समर्थ ||
                                 ||  जय जय रघुवीर समर्थ  ||
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    long long time = b;
    long long c = 1;
    for(int i=0; i < n; i++){
        int temp;
        cin>>temp;
        time += min(c+temp,a)-1;
    }
    cout<<time;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}