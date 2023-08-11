#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy[] = {-1, 1, 0, -1, 1, -1, 1, 0};
int MOD = 1e9 + 7;
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        int x=2*n+p;
        int cur=1;
        while(x){
            int i=cur+1;
            while(x&&i<=n){
                cout<<cur<<" "<<i<<endl;
                i++;
                x--;
            }
            cur++;
        }
    }
}