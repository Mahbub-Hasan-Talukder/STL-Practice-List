#include <algorithm>
#include <climits>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <vector>
#include <sstream>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define all(x) x.begin(),x.end()




void solve(){
    int n,m; cin >> n >> m;
    vector<pair<int,string>>v[m+1];
    for(int i=0;i<n;i++){
        string s; int reg, points;
        cin >> s >> reg >> points;
        v[reg].push_back({points,s});
    }
    for(int i=1;i<=m;i++){
        sort(v[i].rbegin(),v[i].rend());
        if(v[i].size()==2||v[i][1].first!=v[i][2].first){
            cout << v[i][0].second << ' ' << v[i][1].second << '\n';
        }
        else cout << "?\n";
    }

}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

