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
    int n,m;
    cin>>n>>m;
    char grid[n][m];
    int row[n],col[m];
    memset(row,0, sizeof row);
    memset(col,0,sizeof col);
    int nb=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>grid[i][j];
            if(grid[i][j]=='*'){
                row[i]++;
                col[j]++;
                nb++;
            }
        }
    }
    bool test=false;
    int x=0,y=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (nb==row[i]+col[j]-(grid[i][j]=='*'))
            {
                test=true;
                x=i+1,y=j+1;
                break;
            }
        }
        if(test)
            break;
    }
    if(test) {
        cout << "YES" << nl;
        cout<<x<<" "<<y<<nl;
    }
    else
        cout<<"NO"<<nl;
}