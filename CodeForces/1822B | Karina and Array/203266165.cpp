#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 1e9 + 7;
int lastStoneWeight(vector<int>& stones) {
priority_queue<int>q;
    for (auto x:stones) {
     q.push(x);
    }
while(q.size()>1){
    int x=q.top();
    q.pop();
    int y=q.top();
    q.pop();
    if(x!=y){
        q.push(x-y);
    }
}
if(q.empty())
    return 0;
return q.top();
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 int t;
 cin>>t;
 while(t--){
 int n;
 cin>>n;
 int a[n];
     for (int i = 0; i < n; ++i) {
         cin>>a[i];
     }
     sort(a,a+n);
     ll ans=max(a[0]*1LL*a[1],a[n-2]*1LL*a[n-1]);
     cout<<ans<<endl;
 }
}