#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define all(x) x.begin(),x.end()




void solve(){
    int n,q; cin >> n >> q;
    vector<int>v[n];
    while(q--){
        int t; cin >> t;
        if(t==0){
            int ind, x; cin >> ind >> x; 
            v[ind].push_back(x);
        }
        else if(t==1){
            int ind; cin >> ind;
            for(int i=0;i<v[ind].size();i++){
                cout << v[ind][i];
                if(i<v[ind].size()-1)cout << ' ';
            }
            cout << '\n';
        }
        else{
            int ind;
            cin >> ind;
            v[ind].clear();
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

