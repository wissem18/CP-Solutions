 
#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
double const pi = 3.141592653;
vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
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
      int x=-1;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]>='5'){
                x=i;
                int j=x-1;
                while(j>=0&&s[j]=='4'){
                    j--;
                    x--;
                }
                break;
            }
        }
        if(x==-1)
            cout<<s<<endl;
        else{
            int j=x-1;
            while(j>=0&&s[j]=='9')
                j--;
            string ans;
            if(j==-1){
                ans+='1';
                for (int i = 0; i < s.size(); ++i) {
                    ans+='0';
                }
            }
            else{
                for (int i = 0; i <j ; ++i) {
                    ans+=s[i];
                }
                ans+=char(s[j]+1);
                for (int i = j+1; i <s.size() ; ++i) {
                    ans+='0';
                }
            }
            cout<<ans<<endl;
        }
    }
 
}
 
 