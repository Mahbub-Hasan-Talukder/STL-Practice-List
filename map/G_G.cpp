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
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define all(x) x.begin(),x.end()

#define pii pair<int,int>

void solve(){
    map<pii,string>mp;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        ll a,b; string s; cin >> a >> b >> s;
        pii p = {a,b};
        mp[p] = s;
    }
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b; 
        cout << mp[{a,b}] << endl;
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

