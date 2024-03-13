// Lets take he will leave two yoyo's at same position
#include<bits/stdc++.h>
using namespace std;
void solve(){
    // It will take n,m,i,j
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    // choosing the maximum gap x axis
    int x1=0;
    int y1 = 0;
    for(int i=1; i <= n; i++){
        x1 = max(abs(i-x),x1);
    }
    for(int j=1; j <= m; j++){
        y1 = max(abs(j-y),y1);
    }
    cout<<x1<<" "<<y1<<" "<<x1<<" "<<y1;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}