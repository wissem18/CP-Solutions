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
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        vector<int>cnt1(2*n+2,0);
        int i=0;
        while(i<n){
            int j=i+1;
            while(j<n&&a[i]==a[j])
                j++;
            cnt1[a[i]]=max(cnt1[a[i]],j-i);
            i=j;
        }
        vector<int>cnt2(2*n+2,0);
        int i1=0;
        while(i1<n){
            int j1=i1+1;
            while(j1<n&&b[i1]==b[j1])
                j1++;
            cnt2[b[i1]]=max(cnt2[b[i1]],j1-i1);
            i1=j1;
        }
        int ans=0;
        for (int j = 1; j <=2*n ; ++j) {
            ans=max(ans,cnt1[j]+cnt2[j]);
        }
        cout<<ans<<endl;
    }
}