#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 1e9+7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll a,b;
    cin>>a>>b;
    ll x=a*b/gcd(a,b);
    ll last=0;
    ll d=0,m=0;
    ll i=a,j=b;
    while(i!=x||j!=x){
        if(i<j){
            d+=i-last;
            last=i;
            i+=a;
        }
        else{
          m+=j-last;
          last=j;
          j+=b;
        }
    }
    if(a>b){
        d+=x-last;
    }
    else
        m+=x-last;
if(d<m)
    cout<<"Masha";
else if(d>m)
    cout<<"Dasha";
else
    cout<<"Equal";
}