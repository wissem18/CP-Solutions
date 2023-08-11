#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        sort(a,a+n);
        int l=0,r=1e9;
        while(l<r){
            int mid=(l+r)/2;
            int cnt=1;
            int mn=max(1,a[0]-mid),mx=min(1000000000,mid+a[0]);
            for (int i = 1; i < n; ++i) {
                 int curmn=max(1,a[i]-mid);
                 int curmx=min(1000000000,mid+a[i]);
                 if(curmn>mx){
                     cnt++;
                     mn=curmn;
                     mx=curmx;
                 }
                 if(cnt>3)
                     break;
            }
            if(cnt>3)
                l=mid+1;
            else
                r=mid;
        }
        cout<<l<<endl;
    }
}