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
        int n,k;
        cin>>n>>k;
        int h[n],p[n];
        for (int i = 0; i < n; ++i) {
            cin>>h[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>p[i];
        }
        int mx=*max_element(h,h+n);
        pi a[n];
        for (int i = 0; i < n; ++i) {
            a[i]={p[i],h[i]};
        }
        sort(a,a+n);
        ll cum=k;
        bool test=true;
        for (int i = 0; i < n; ++i) {
            if(cum>=a[i].second)
                continue;
            while(cum<a[i].second){
                k-=a[i].first;
            if(k<0){
                test= false;
                break;
            }
            cum+=k;
            }
        }
        (test)?cout<<"YES"<<nl:cout<<"NO"<<nl;
    }
}