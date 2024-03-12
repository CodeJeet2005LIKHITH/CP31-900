/*                                   || श्री राम समर्थ ||
                                 ||  जय जय रघुवीर समर्थ  ||
*/
// Kuch Prabadh kar sakte hain
#include<bits/stdc++.h>
using namespace std;
// because of bigger values we cannot use things like o(N) Traversal, we need to find something like a formula
// Lets check for the extreme cases
void solve(){
    long long n,k,x;
    cin>>n>>k>>x;
    // min:- sum of first k elements
    // max:- sum of first n elements
    // if number lies between two then it is possible
    long long min = k*(k+1)/2;
    long long totalSum = n*(n+1)/2 ;
    long long max = totalSum-(n-k)*(n-k+1)/2;
    if(x >= min && x <= max)cout<<"YES";
    else cout<<"NO";
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}