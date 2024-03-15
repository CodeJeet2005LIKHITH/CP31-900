#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin>>s;
    if(s[0] == s[s.size()-1])cout<<s;
    else {
        s[0] = s[s.size()-1];
        cout<<s;
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