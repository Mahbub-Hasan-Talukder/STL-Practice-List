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
    int x; 
    map<int,int>mp;
    vector<int>v;
    while(cin >> x){
        if(mp[x]==0){
            v.push_back(x);
        }
        mp[x]++;
    }
    for(int i:v)cout << i << " " << mp[i] << '\n';
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

