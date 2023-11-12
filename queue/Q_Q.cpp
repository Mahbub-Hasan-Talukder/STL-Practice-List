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
    int n,m;
    cin >> n >> m;
    deque<int>dq;
    for(int i=0;i<m;i++)
    {
        string s;
        int k;
        cin>>s;
        if(s=="pushLeft")
        {
            cin>>k;
            if(dq.size()==n)cout<<"The queue is full\n";
            else {
                cout<<"Pushed in left: "<<k<<endl;
                dq.push_front(k); 
            }
        }
        else if(s=="pushRight")
        {
            cin>>k;
            if(dq.size()==n)cout<<"The queue is full\n";
            else {
                cout<<"Pushed in right: "<<k<<endl; dq.push_back(k); 
            }       
        }
        else if(s=="popLeft")
        {
            if(dq.size()==0)cout<<"The queue is empty\n";
            else {
                cout<<"Popped from left: "<<dq.front()<<endl; 
                dq.pop_front();
            }
        }
        else if(s=="popRight")
        {
            if(dq.size()==0)cout<<"The queue is empty\n";
            else {
                cout<<"Popped from right: "<<dq.back()<<endl; 
                dq.pop_back();
            }
        }
    }
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1, cs=1; cin >> t;
    while(t--){
        cout << "Case " << cs++ << ":\n";
        solve();
    }
}

