#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    string target;
    cin>>s>>target;
    string ans;
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    for(int i=0; i < s.size(); i++)mp1[s[i]]++;
    for(int i=0; i < target.size(); i++)mp2[target[i]]++;
    // Traverse throught the string
    for(int i=0; i < s.size(); i++){
        if(mp2[s[i]] != 0){
            if(!(mp2[s[i]] < mp1[s[i]])){
                ans += s[i];
                mp2[s[i]]--;
                
               
            }
        }
    }
    cout<<ans<<endl;
    if(ans == target)cout<<"YES";
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