#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
 int n;
 cin>>n;
 int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int ans=*max_element(a,a+n)-a[0];
    if(ans>0)
        ans++;
    else{
        bool test= false;
        for (int i = 1; i <n ; ++i) {
            if(a[i]==a[0]){
                test=true;
                break;
            }
        }
        if(test)
            ans++;
    }
    cout<<ans;
}

