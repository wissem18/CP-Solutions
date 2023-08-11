#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int cur=1;
        for (int i = 1; i < n; i+=2) {
            for (int j = 0; j < m; ++j) {
                a[i][j]=cur;
                cur++;
            }
        }
        for (int i = 0; i < n; i+=2) {
            for (int j = 0; j < m; ++j) {
                a[i][j]=cur;
                cur++;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}