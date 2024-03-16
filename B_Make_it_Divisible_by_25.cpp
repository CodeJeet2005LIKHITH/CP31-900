#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    long long n = s.size();
    long long ans = INT_MAX;
    
    for(int i=n-1; i>=0; i--){
        // First we find zero then what will be the cases
        // we can find 5 7 0
        if(s[i] == '0'){
            for(int j = i-1; j >= 0; j--){
                if(s[j] == '5'){
                    ans = min(ans,i-j-1+n-i-1);
                }
                else if(s[j] == '0'){
                    ans = min(ans,i-j-1+n-i-1);
                }
            }
        }
        else if(s[i] == '5'){
            for(int j = i-1; j >= 0; j--){
                if(s[j] == '2'){
                    ans = min(ans,i-j-1+n-i-1);
                }
                else if(s[j] == '7'){
                    ans = min(ans,i-j-1+n-i-1);
                }
            }
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