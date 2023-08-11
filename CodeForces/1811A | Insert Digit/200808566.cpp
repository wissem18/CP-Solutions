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
    string s;
    char c;
    cin>>n>>c>>s;
    string res="";
    int lst=-1;
    for (int i = 0; i <s.size() ; ++i) {
        if(s[i]>=c){
            res+=s[i];
        }
        else{
            res+=c;
            lst=i;
            break;
        }
    }
    if(lst==-1)
        res+=c;
    else{
    for (int i = lst; i <s.size() ; ++i) {
        res+=s[i];
    }
    }
    cout<<res<<endl;
}
}