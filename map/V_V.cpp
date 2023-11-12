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
    map<string,int>mp;
    int q; cin >> q;
    
    while(q--){
        int t; cin >> t;
        if(t==0){
            string key; ll val;
            cin >> key >> val;
            mp[key] = val;
        }
        else if(t==1){
            string key; cin >> key; 
            if(mp.find(key)==mp.end())cout << 0 << '\n';
            else cout << mp[key] << '\n';
        }
        else if(t==2){
            string key; cin >> key; 
            mp.erase(key);      
        }
        else{
            string left, right;
            cin >> left >> right;
            auto it = mp.lower_bound(left);
            auto last = mp.upper_bound(right);
            while(it!=last){
                cout << (*it).first << " " << (*it).second << '\n';
                it++;
            }
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

