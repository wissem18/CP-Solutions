#include "bits/stdc++.h"

using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<pi,int>m;
    int x=0,y=0;
    bool test= false;
    m[{x,y}]++;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='R')
            x++;
        if(s[i]=='L')
            x--;
        if(s[i]=='U')
            y++;
        if(s[i]=='D')
            y--;
        if(m.count({x,y})){
            test= true;
            break;
        }
        m[{x,y}]++;
    }
    test?cout<<"Yes":cout<<"No";
}

