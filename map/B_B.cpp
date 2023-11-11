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
    int q; cin >> q;
    map<string,int>mp;
    while(q--){
        int t; cin >> t;
        if(t==1){
            string name; int mark;  cin >> name >> mark;
            mp[name] += mark;
        }
        else if(t==2){
            string name; cin >> name; mp.erase(name);
        }
        else{
            string name; cin >> name; cout << mp[name] << endl;
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

