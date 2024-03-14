#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;  i< n; i++)cin>>arr[i];
    for(int i=n-2; i >= 0; i--){
        while(arr[i+1]%arr[i] == 0)arr[i]++;
    }
    for(auto it:arr)cout<<it<<" ";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}