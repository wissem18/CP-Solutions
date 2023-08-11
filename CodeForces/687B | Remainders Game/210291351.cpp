#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
vector<int>factorization(int n){
    vector<int>a;
    for (int i = 2; i*i <=n ; ++i) {
        if(n%i==0){
            int x=1;
            while(n%i==0){
                n/=i;
                x*=i;
            }
            a.push_back(x);
        }
    }
    if(n>1)a.push_back(n);
    return a;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
  int n,k;
  cin>>n>>k;
  set<int> c;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        c.insert(x);
    }
    vector<int>a= factorization(k);
    bool test= true;
    for (int i = 0; i < a.size(); ++i) {
        bool t=false;
        for (int j = a[i]; j <=1e6; j+=a[i]) {
            if(c.count(j)){
                t= true;
                break;
            }
        }
        if(!t){
            test=false;
            break;
        }
    }
    (test)?cout<<"Yes":cout<<"No";
}