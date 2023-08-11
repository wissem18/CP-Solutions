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
   int n,m;
   cin>>n>>m;
   int a[m];
    priority_queue<int>qmx,qmn;
    for (int i = 0; i < m; ++i) {
        cin>>a[i];
        qmx.push(a[i]);
        qmn.push(-a[i]);
    }
    int mx=0,mn=0;
    while(n--){
        int x=qmx.top();
        qmx.pop();
        mx+=x;
        x--;
        if(x)
            qmx.push(x);
        int y=qmn.top();
        qmn.pop();
        mn+=(-y);
        y++;
        if(y)
            qmn.push(y);
    }
   cout<<mx<<" "<<mn<<endl;
}