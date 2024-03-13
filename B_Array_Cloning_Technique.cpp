#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    unordered_map<int,int>mp;
    for(int i=0; i < arr.size(); i++){
        int temp;
        cin>>temp;
        mp[temp]++;
    }
    int maxi = 0;
    for(auto it: mp){
        maxi = max(it.second,maxi);
    }
    int count = 1;
    int target = n-maxi;
    int rep = maxi;
    while(target){
        for(int i=1; i < rep && target >= 0; i++){
            if(target > 0){
                count++;
                target--;
            }
            count++;
            rep *= 2;

        }
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