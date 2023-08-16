#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
string l,r;
cin>>l>>r;
int s1=l.size();
int s2=r.size();
while(s1<s2){
    l="0"+l;
    s1++;
}
while(s2<s1){
    r="0"+r;
    s2++;
}
int ans=0;
int i=0;
while(i<s1&&l[i]==r[i])
    i++;
if(i!=s1){
ans+=abs((l[i]-'1')-(r[i]-'1'));
ans+=(s1-i-1)*9;
}
cout<<ans<<endl;
}
}