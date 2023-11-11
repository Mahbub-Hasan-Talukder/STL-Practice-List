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
    set<int>st;
    while(q--){
        int t,x; cin >> t >> x;
        if(t==1)st.insert(x);
        else if(t==2)st.erase(x);
        else{
            if(st.find(x)!=st.end())cout << "Yes\n";
            else cout << "No\n";
        }
    }
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; 
    while(t--){
        solve();
    }
}

