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
    int q; cin >> q;
    vector<int>v;
    while(q--){
        int t; cin >> t;
        if(t==0){
            int x; cin >> x; v.push_back(x);
        }
        else if(t==1){
            int x; cin >> x; cout << v[x] << '\n';
        }
        else{
            if(v.size()>0)v.pop_back();
        }
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

