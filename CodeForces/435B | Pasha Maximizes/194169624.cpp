#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 998244353;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int k;
    string a;
    cin>>a>>k;
    for (int i = 0; i < a.size(); ++i) {
        int tmp=i;
        for (int j = i+1; j <=min((int)a.size()-1,i+k) ; ++j) {
            if(a[j]>a[tmp]){
                tmp=j;
            }
        }
        for (int j = tmp; j >i ; --j) {
            swap(a[j],a[j-1]);
        }
        k-=tmp-i;
    }
    cout<<a<<nl;
}