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
    int n; cin >> n;
    int ans = 0, cnt = 0;
    map<int,int>inRoom;
    for(int i=0;i<n;i++){
        char c; int x; 
        cin >> c >> x;
        if(c=='+'){
            cnt++;
            inRoom[x] = 1;
        }
        else if(inRoom[x]==0){
            ans++;
        }
        else {
            inRoom[x] = false;
            cnt--;
        }
        ans = max(ans,cnt);
    }
    cout << ans << '\n';
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

