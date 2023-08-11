#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
vector<int>divisors(int x){
    vector<int>ans;
    ans.push_back(1);
    if(x%2==0&&x/2>2)
        ans.push_back(2);
    for (int l = 3; l*l<=x; ++l) {
        if(x%l==0){
            if(l*l!=x)
               ans.push_back(x/l);
            ans.push_back(l);
        }
    }
    return ans;
}
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int a[n];
    vector<int>pos;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    vector<int>d= divisors(n);
    bool test=false;
    for (int i = 0; i <d.size() ; ++i) {
        for (int j = 0; j < d[i]; ++j) {
            bool test1=true;
            for (int k =j,cnt=0 ; cnt<n/d[i] ; k=(k+d[i])%n,cnt++) {
                   if(!a[k]){
                       test1=false;
                       break;
                   }
            }
            if(test1){
                test=true;
                break;
            }
        }
        if(test)
            break;
    }
    (test)?cout<<"YES":cout<<"NO";
}