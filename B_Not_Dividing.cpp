#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;  i< n; i++){
        cin>>arr[i];
        // To solve the issue with 1
        arr[i]++;
    }
    
    // This is possible when your elements are in desecending order but we cannot say it will be done in 2n so we use o(n) approach
    for(int i=0; i < n-1; i++){

        if(arr[i+1]%arr[i]== 0)arr[i+1]++;
    }
    for(int i=0; i < n; i++)cout<<arr[i]<<" ";
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}