#include<bits/stdc++.h>
using namespace std;
void solve(){
        int a,b,c;
        cin>>a>>b>>c;
        if((2*b-c>0)&&(2*b-c)%a==0)
        {
            cout<<"YES"<<endl;
        }
        else if((a+c)%(2*b)==0)
        {
            cout<<"YES"<<endl;
        }
        else if((2*b-a>0)&&(2*b-a)%c==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
 
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        
    }
    
}