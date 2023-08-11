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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
   int x=a*d-b*c;
   if(x>0)
    cout<<x/gcd(x,a*d)<<"/"<<a*d/gcd(x,a*d);
   else
       cout<<-x/gcd(x,c*b)<<"/"<<c*b/gcd(x,c*b);
}