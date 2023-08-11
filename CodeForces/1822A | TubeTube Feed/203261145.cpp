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
 int n,time;
 cin>>n>>time;
 int a[n],b[n];
     for (int i = 0; i < n; ++i) {
         cin>>a[i];
     }
     for (int i = 0; i < n; ++i) {
         cin>>b[i];
     }
     int cnt=0;
     int mx=0;
     int ans=-2;
     for (int i = 0; i < n; ++i) {
         if(a[i]+cnt<=time&&b[i]>mx){
             mx=b[i];
               ans=i;
         }
         cnt++;
     }
     cout<<ans+1<<endl;
 }
}