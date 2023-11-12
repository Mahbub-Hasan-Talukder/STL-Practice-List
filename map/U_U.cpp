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
    map<string,int>mp;
    while(q--){
        int t; cin >> t;
        if(t==0){
            string key; int val;
            cin >> key >> val; 
            mp[key] = val;
        }
        else if(t==1){
            string key; cin >> key;
            cout << mp[key] << '\n';
        }
        else{
            string key; cin >> key;
            // mp[key] = 0;
            mp.erase(key);
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

