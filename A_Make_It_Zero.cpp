// test case observation
// xor even odd concept
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0; i < n; i++)cin>>arr[i];
    // if n is odd there are only two steps
    // making the array same by using xor 
    // taking the xor of the all
    if(n%2 == 0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else{
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        
    }
}