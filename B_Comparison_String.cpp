#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxi = 1;
    int curr = 1;
    for(int i=1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            curr++;
        }
        else{
            maxi = max(curr,maxi);
            curr=1;
        }
    }
    maxi = max(maxi,curr);
    cout<<maxi+1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }

}