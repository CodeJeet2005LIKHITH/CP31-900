#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    // keeping the first number same sorting the getting the largest element in the next part

    int temp = INT_MIN;
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }
    
    int a = arr[0];
    // maxi
    int maxi = INT_MIN;
    for(int i=0; i < n; i++)maxi=max(arr[i],maxi);
    int ans1 = maxi-a;
    // cout<<ans1;
    int b = arr[n-1];
    int mini = INT_MAX;
    for(int i=0; i < n-1; i++)mini = min(mini,arr[i]);
    int ans2 = b-mini;
    int ans3 = 0;
    // Another possibility
    // for the test case 2 1 8 1 max consecutive difference
    for(int i=0; i < n-1; i++){
        ans3 = max(ans3,arr[i]-arr[i+1]);
    }

    cout<<max({ans1,ans2,ans3});

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}