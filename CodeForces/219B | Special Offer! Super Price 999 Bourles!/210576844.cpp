#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll p,d;
    cin>>p>>d;
    ll mn=0;
   ll a=p;
    while(true){
        string s= to_string(a);
        int i=s.size()-1;
        while(i>=0&&s[i]=='9')
            i--;
        if(i<0)
            break;
         ll x=((s[i]-'0')+1)%10;
         ll po=1;
        for (int j = 0; j < s.size()-i-1; ++j) {
            po*=10;
        }
         mn+=x*po;
        if(mn>d)
            break;
        a=p-mn;
    }
    cout<<a<<endl;
}