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

int main()
{
    map<string, string> mp;
    string key,val, str;
    stringstream ss;
    while(getline(cin, str) && str.size()){
        ss.clear();
        ss << str;
        ss >> val;
        ss >> key;
        mp[key] = val;
    }
    while(cin >> key){
        if(mp[key].size()==0)cout << "eh\n";
        else cout << mp[key] << endl;
    }
	return 0;
}