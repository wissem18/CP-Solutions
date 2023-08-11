#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
ll xd=1000000000000;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int n;
cin>>n;
string s;
cin>>s;
string res="";
    for (int i = 0; i <s.size() ; ++i) {
        if(s[i]=='1'||s[i]=='0')
            continue;
        else if(s[i]=='4'){
            res+="223";
        }
        else if(s[i]=='6')
            res+="35";
        else if(s[i]=='8')
            res+="2227";
        else if(s[i]=='9')
            res+="2337";
        else
            res+=s[i];
    }
    sort(res.begin(),res.end());
    reverse(res.begin(),res.end());
    cout<<res;
}