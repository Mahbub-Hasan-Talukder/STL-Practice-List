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
#define e '\n'
void solve(){
    stack<string>sk_back,sk_front;
    string s="",cur = "http://www.lightoj.com/";
    while(1)
    {
        cin>>s;
        if(s=="BACK")
        {
            if(sk_back.empty())cout<<"Ignored\n";
            else
            {
                cout<<sk_back.top()<<'\n';
                sk_front.push(cur);
                cur=sk_back.top();
                sk_back.pop();

            }
        }
        else if(s=="FORWARD")
        {
            if(sk_front.empty())cout<<"Ignored\n";
            else
            {
                cout<<sk_front.top()<<'\n';
                sk_back.push(cur);
                cur=sk_front.top();
                sk_front.pop();

            }
        }
        else if(s=="VISIT")
        {
            sk_back.push(cur);
            while(!sk_front.empty())
            {
                sk_front.pop();
            }
            cin>>s;
            cout<<s<<'\n';
            cur=s;
        }
        else break;
    }
}
int main()
{
    int t, cs=1; cin>>t;
    while(t--)
    {
        printf("Case %d:\n", cs++);
        solve();

    }
}
