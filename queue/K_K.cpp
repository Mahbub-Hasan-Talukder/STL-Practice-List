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
    while(1){
        int n; cin >> n;
        if(n==0)break;

       priority_queue<ll,vector<ll>, greater<ll>>pq;
        for(int i=0;i<n;i++){
            ll x; cin >> x;
            pq.push(x);
        }
        ll ans = 0;
        while(!pq.empty()){
            ll a = pq.top(); pq.pop();
            if(pq.empty())break;
            ll b = pq.top(); pq.pop();
            ans+=(a+b);
            pq.push(a+b);
        }
        cout << ans << '\n';
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

