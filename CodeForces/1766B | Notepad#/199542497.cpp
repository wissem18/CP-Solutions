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
   set<string>st;
   bool test=false;
   map<string,int>pos;
    for (int i = 0; i < n-1; ++i) {
        string k=s.substr(i,2);
        if(!st.count(k))
            pos[k]=i;
        if(st.count(k)&&i-pos[k]>1){
           test=true;
           break;
        }
        st.insert(k);
    }
    (test)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
}