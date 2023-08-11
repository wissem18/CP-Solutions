#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int n;
cin>>n;
char a[n][n];
    vector<char>x;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        x.push_back(a[0][i]);
    }
    for (int i = 1; i < n; ++i) {
        x.push_back(a[i][n-1]);
    }
    for (int i = n-2; i >=0 ; --i) {
        x.push_back(a[n-1][i]);
    }
    for (int i = n-2; i >=0 ; --i) {
        x.push_back(a[i][0]);
    }
    a[0][0]=x[x.size()-1];
    int k=0;
    for (int i = 1; i < n; ++i) {
       a[0][i]=x[k];
       k++;
    }
    for (int i = 1; i < n; ++i) {
      a[i][n-1]=x[k];
      k++;
    }
    for (int i = n-2; i >=0 ; --i) {
        a[n-1][i]=x[k];
        k++;
    }
    for (int i = n-2; i >=0 ; --i) {
      a[i][0]=x[k];
      k++;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}

