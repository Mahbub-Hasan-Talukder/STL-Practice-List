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

bool chk(string x, string y){
    for(int i=0;i<x.size();i++)x[i] = tolower(x[i]);
    for(int i=0;i<y.size();i++)y[i] = tolower(y[i]);
    int fre[60]; memset(fre,0,sizeof fre);
    for(int i=0;i<x.size();i++){
        fre[x[i]-'A']++;
    }
    for(int i=0;i<y.size();i++){
        fre[y[i]-'A']--;
    }
    for(int i=0;i<60;i++)if(fre[i]!=0)return false;
    return true;
}

void solve(){
    string s;
    vector<string>v; 
    while(cin>>s and s!="#"){
        v.push_back(s);
    } 
    vector<string>ans;
    int vis[v.size()]; memset(vis,0,sizeof vis);
    for(int i=0;i<v.size();i++){
        if(vis[i])continue;
        bool anaContains = false;
        for(int j=i+1;j<v.size();j++){
            if(vis[j])continue;
            if(chk(v[i],v[j])){
                vis[j] = 1;
                anaContains = true;
            }
        }
        if(!anaContains)ans.push_back(v[i]);
    }
    sort(ans.begin(),ans.end());
    for(string s:ans)cout << s << '\n';

}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

