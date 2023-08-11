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
    int n;
    cin>>n;
   pi a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i].first>>a[i].second;
    }
    int sa=0,sg=0;
    string res="";
    for (int i = 0; i < n; ++i) {
        if(abs(sa+a[i].first-sg)<=500){
            sa+=a[i].first;
            res+='A';
        }
        else{
            sg+=a[i].second;
            res+='G';
        }
    }
    cout<<res;
}