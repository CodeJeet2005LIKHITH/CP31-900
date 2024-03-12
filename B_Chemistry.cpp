#include<bits/stdc++.h>
using namespace std;
// Intution: some where the problem is going to depend on odd 
void solve(){
    unordered_map<char,int>mp;
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i < s.size(); i++)mp[s[i]]++;
    int count = 0;
    // Traversing through the map
    for(auto it:mp){
        if(it.second%2 == 1)count++;
    }
    if(k >= count-1)cout<<"YES";
    else cout<<"NO";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}