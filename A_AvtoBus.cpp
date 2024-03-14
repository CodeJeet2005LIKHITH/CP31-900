// for maximum every bus should be 3axeled
// for minimum every bus should be 2 axeled
// your bus tyres should be either divisible by 4 or 6
#include<bits/stdc++.h>
using namespace std;
void solve(){
        long long int n;
        cin >> n;
        int flag=1;
        if (n < 4 || n % 2 != 0)
        {
            cout << -1 << endl;
            flag = 0;
        }
        long long x = n / 4;
 
        long long y = n / 6;
        if (n % 6 == 2)
        {
            x++;
        }
        else if (n % 6 == 4)
        {
            y++;
        }
 
        if(flag)cout << y << " " << x << endl;

    
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        // cout<<endl;
    }
}