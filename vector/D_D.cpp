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
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin >> v[i];
    int x; cin >> x; 
    --x;
    v.erase(v.begin()+x);
    int a,b; cin >> a >> b; 
    --a; --b;
    v.erase(v.begin()+a,v.begin()+b);
    cout << v.size() << endl;
    for(int i:v)cout << i << ' ';
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

