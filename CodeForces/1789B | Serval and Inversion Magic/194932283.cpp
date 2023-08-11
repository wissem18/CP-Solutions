#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 998244353;
bool ispalindrome(string s){
    string k=s;
    reverse(s.begin(),s.end());
    return k==s;
}
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
     int nb=0;
       for (int i = 0; i < n/2; ++i) {
           if(s[i]!=s[n-i-1]){
               while(i<n/2&&s[i]!=s[n-i-1]){
                   s[n-i-1]=s[i];
                   i++;
               }
               nb++;
           }
           if(nb)
               break;
       }
       if(ispalindrome(s))
           cout<<"YES"<<nl;
       else
           cout<<"NO"<<nl;
   }
}
 