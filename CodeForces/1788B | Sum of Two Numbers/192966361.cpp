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
int sum(int x){
    string k= to_string(x);
    int ans=0;
    for (int i = 0; i < k.size(); ++i) {
        ans+=k[i]-'0';
    }
    return ans;
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
                string k= to_string(n);
                string x="",y="";
                int j=0;
                for (int i = 0; i < k.size(); ++i) {
                    if((k[i]-'0')%2==0){
                        int c=(k[i]-'0')/2;
                        x+=char(c+'0');
                        y+=char(c+'0');
                    }
                    else{
                        int c=(k[i]-'0')/2;
                        if(j%2==0){
                            x+=char(c+1+'0');
                            y+=char(c+'0');
                        }
                        else{
                            x+=char(c+'0');
                            y+=char(c+1+'0');
                        }
                        j++;
                    }
                }
                int x1= stoi(x);
                int y1= stoi(y);
                cout<<x1<<" "<<y1<<nl;
            }
 
    }