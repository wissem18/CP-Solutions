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
    int t;
    cin >> t;
    while (t--) {
     int n;
     cin>>n;
     int a=0,b=0;
     int i=1;
     int s=0;
        while(s+i<=n){
            if(i%4==0||i%4==1)
                a+=i;
            else
                b+=i;
            s+=i;
            i++;
        }
        if(i%4==0||i%4==1)
            a+=n-s;
        else
            b+=n-s;
        cout<<a<<" "<<b<<nl;
    }
}