#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n+1,0);
    int count = 0;
    for(int i=1; i < arr.size(); i++)cin>>arr[i];
    for(int i=1; i <= n; i++){
        if(arr[i-1] == 0 && arr[i] != 0)count++;
    }
    cout<<count;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}