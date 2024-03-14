#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < arr.size(); i++)cin>>arr[i];
    int count=0;
    int flag = 1;
    for(int i=n-2; i >= 0; i--){
        while(arr[i] >= arr[i+1] && arr[i] != 0){
            count++;
            arr[i] = arr[i]/2;
        }
        if(arr[i] >= arr[i+1]){
            flag = 0;
            cout<<-1;
            break;
        }
    }
    if(flag)cout<<count;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}