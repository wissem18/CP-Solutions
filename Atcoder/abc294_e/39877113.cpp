#include "bits/stdc++.h"

using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   int n,q;
   cin>>n>>q;
   set<int>s;
   priority_queue<int>notcalled;
    for (int i = 1; i <=n ; ++i) {
        notcalled.push(-i);
    }
    while(q--){
     int x;
     cin>>x;
     if(x==1){
         int a=notcalled.top();
         notcalled.pop();
         s.insert(-a);
     }
     if(x==2){
         int c;
         cin>>c;
         s.erase(c);
     }
     if(x==3){
         cout<<*s.begin()<<nl;
     }
    }
}
