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
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==1&&y1==1||x1==n&&y1==1||x1==1&&y1==m||x1==n&&y1==m||x2==1&&y2==1||x2==n&&y2==1||x2==1&&y2==m||x2==n&&y2==m)
            cout<<2<<endl;
        else if (x1==1||x1==n||y1==1||y1==m||x2==1||x2==n||y2==1||y2==m)
            cout<<3<<endl;
        else
            cout<<4<<endl;
    }
}