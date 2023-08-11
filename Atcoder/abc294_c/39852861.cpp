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
int h,w;
cin>>h>>w;
int a[h][w];
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin>>a[i][j];
        }
    }
    string s[h];
    for (int i = 0; i < h; ++i) {
        string k="";
        for (int j = 0; j < w; ++j) {
            if(a[i][j]==0)
                k+='.';
            else
                k+=char('A'+a[i][j]-1);
        }
        s[i]=k;
    }
    for (int i = 0; i < h; ++i) {
        cout<<s[i]<<nl;
    }
}
