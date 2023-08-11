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
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for (int i = 0; i < s.size(); ++i) {
            int l=-1;
            int r=-1;
            if(i-1>=0){
                l=s[i-1]-'0';
            }
            if(i+1<s.size()&&s[i+1]!='?')
                r=s[i+1]-'0';
          if(s[i]=='?'){
              if(l!=-1&&r!=-1){
               if(l==r){
                   s[i]=char(l+'0');
               }
               else
                   s[i]='0';
              }
              else if(r!=-1){
                  s[i]=char(r+'0');
              }
              else if(l!=-1)
                  s[i]=char(l+'0');
              else
                  s[i]='0';
          }
        }
        cout<<s<<endl;
    }
}