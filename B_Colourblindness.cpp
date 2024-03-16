#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    // We will get a string
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i < s1.size(); i++){
        if(s1[i] == s2[i]){
            // Sab theek hain
        }
        else{
            if(s1[i] == 'R' && s2[i] != 'R'){
                cout<<"NO";
                return;
            }
            else if(s1[i] == 'G' && s2[i] == 'R' || s1[i] =='B' && s2[i] == 'R'){
                cout<<"NO";
                return;
            }
        }
    }
    cout<<"YES";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}