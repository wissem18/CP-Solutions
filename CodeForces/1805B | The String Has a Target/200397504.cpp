#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
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
cin>>t;
while(t--){
    int n;
    cin>>n;
string s;
cin>>s;
    int mn=0;
    char c='z';
    for (int i = 0; i < n; ++i) {
      if(s[i]<=c){
          c=s[i];
          mn=i;
      }
    }
    if(mn==0){
        cout<<s<<endl;
    }
    else{
        string res="";
        res+=s[mn];
        for (int i = 0; i <mn ; ++i) {
            res+=s[i];
        }
        for (int i = mn+1; i <n ; ++i) {
            res+=s[i];
        }
        cout<<res<<endl;
    }
}
}