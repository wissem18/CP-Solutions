#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int ans=1;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]=='?'){
                if(i==0)
                    ans*=9;
                else
                    ans*=10;
            }
        }
        if(s[0]=='0')
            ans=0;
        cout<<ans<<endl;
 
}
}