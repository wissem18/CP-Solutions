#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--) {
string s;
cin>>s;
sort(s.begin(),s.end());
if(s[0]==s[3])
    cout<<-1<<endl;
else if((s[0]==s[1]&&s[1]==s[2]&&s[3]!=s[2])||(s[1]==s[2]&&s[2]==s[3]&&s[0]!=s[1]))
    cout<<6<<endl;
else
    cout<<4<<endl;
}
}