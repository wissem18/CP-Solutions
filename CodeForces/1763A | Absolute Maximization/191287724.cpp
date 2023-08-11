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
string intToBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i <n ; ++i) {
            cin>>a[i];
        }
        int occ[12];
        memset(occ,0,sizeof occ);
        for (int i = 0; i < n; ++i) {
            string k= intToBinary(a[i]);
            for (int j = 0; j <k.size() ; ++j) {
                occ[k.size()-j-1]+=(k[j]=='1');
            }
        }
        int mn=0,mx=0;
        for (int i = 0; i <10 ; ++i) {
            if(occ[i]==n){
                mx+=(1<<i);
                mn+=(1<<i);
            }
            else if(occ[i]!=0){
                mx+=(1<<i);
            }
        }
        cout<<mx-mn<<nl;
    }
}