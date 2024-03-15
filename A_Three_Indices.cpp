#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < n; i++)cin>>arr[i];
    bool found = false;
    for(int i=1; i < n-1; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            found = true;
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2;
            break;
        }
    }
    if(!found)cout<<"NO";

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}