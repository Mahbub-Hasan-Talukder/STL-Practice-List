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

bool cmp(const pair<int,int> &p1, const pair<int,int> &p2){
    if(p1.first<p2.first)return true;
    else if(p1.first==p2.first and p1.second>p2.second)return true;
    return false;
}

void solve(){
    int n; scanf("%d",&n);
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a,b; scanf("%d %d",&a, &b);
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)printf("%d %d\n",v[i].first, v[i].second); 
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; scanf("%d",&t);
    while(t--){
        solve();
    }
}

