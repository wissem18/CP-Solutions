#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
vector<ll>p={1,10,100,1000,10000};
ll calc(string s){
    int n=s.size();
    int mx=0;
    ll ans=0;
    for (int i = n-1; i >=0; --i) {
        int x=s[i]-'A';
        if(x>=mx){
            mx=x;
            ans+=p[x];
        }
        else{
            ans-=p[x];
        }
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        ll ans=calc(s);
        vector<int>firstindex(5,-1),lastindex(5,-1);
        for (int i = 0; i < n; ++i) {
            int x=s[i]-'A';
            lastindex[x]=i;
            if(firstindex[x]!=-1)
                continue;
            firstindex[x]=i;
        }
 
        for (int i = 0; i < 5; ++i) {
            int x=firstindex[i];
            int y=lastindex[i];
            if(x==-1)
                continue;
            for (int j = i+1; j < 5 ; ++j) {
                string tmp=s;
                tmp[x]=char('A'+j);
              ans=max(ans,calc(tmp));
            }
            for (int j = 0; j < i; ++j) {
                string tmp=s;
                tmp[y]=char('A'+j);
                ans=max(ans,calc(tmp));
            }
        }
        cout<<ans<<endl;
    }
}