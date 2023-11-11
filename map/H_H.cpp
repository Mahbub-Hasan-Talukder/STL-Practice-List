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




void solve(){
    int n,t; cin >> n >> t;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s; cin >> s; 
        int x; cin >> x;
        mp[s] = x;
    }

    while(t--){
        string s;
        string t = "";
        ll ans = 0;
        while(cin >> s){
            if(s==".")break;
            ans+=mp[s];
        }
        cout << ans << endl;
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

