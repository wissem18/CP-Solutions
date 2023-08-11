#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
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
    string s;
    cin>>s;
    int i=0;
    int ans=0;
    if(s=="^")
        cout<<1<<endl;
    else{
    while(i<s.size()){
        if(s[i]=='_'){
            int j=i;
            while(j<s.size()&&s[j]=='_')
                j++;
           if(i==0)
               ans++;
           if(j==s.size())
               ans++;
           ans+=j-i-1;
           i=j-1;
        }
        i++;
    }
    cout<<ans<<endl;
    }
}
}