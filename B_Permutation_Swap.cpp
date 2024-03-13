#include<bits/stdc++.h>
using namespace std;
// In this question we know the end product
// so we can make some relation between the current array and result array
// Said the array is a permutation so we know starting and ending elements
void solve(){
    long long n;
    cin>>n;
    vector<long long>arr(n,0);
    long long ans = 0;
    for(long long i=1;  i<= arr.size(); i++){
        long long temp = 0;
        cin>>temp;
       if(ans-i != 0){
         ans = __gcd(abs(temp-i),ans);
       }
    }

    // take the difference between each element in the array and the result array
    // {3,1,2}
    // {1,2,3}
    // result = {2,1,1} if we take 2 swaps we cannot do everything like it will end up at {2,1,3} we cannot move forward
    // now here comes the concept of hcf/gcd greatest common factor in these type of cases

    cout<<ans;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
    
}