// Geometry problem
// see the problem as king/queen going to knight by moving like knight
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;

    // Define knight moves
    vector<pair<int,int>> moves = {{a, b}, {a, -1*b}, {-1*a, b}, {-1*a, -1*b}, {b, a}, {-1*b, a}, {b, -1*a}, {-1*b, -1*a}};

    // Calculate possible positions for the king and queen
    set<pair<int,int>>st1;
    set<pair<int,int>>st2;
    for(auto it: moves) {
        st1.insert({it.first + x1, it.second + y1});
        st2.insert({it.first + x2, it.second + y2});
    }

    int count = 0;
    for(auto x: st1){
        if(st2.find(x) != st2.end())count++;
    }
    cout<<count<<endl;
    
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
   
}
