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
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
string a;
cin>>a;
vector<int>occ(26,0);
    for (int i = 0; i < a.size(); ++i) {
        occ[a[i]-'a']++;
    }
    int x=0;
    while(x<a.size()){
       int nb=0;
        for (int i = 0; i < 26; ++i) {
            if(occ[i]%2)
                nb++;
        }
        if(nb<2)
            break;
        bool test=false;
        for (int i = 0; i <26 ; ++i) {
            if(occ[i]&&occ[i]%2==0){
                occ[i]--;
                test= true;
                break;
            }
        }
        if(!test){
            for (int i = 0; i < 26; ++i) {
                if(occ[i]){
                    occ[i]--;
                    break;
                }
            }
        }
        x++;
    }
    if(x%2==0)
        cout<<"First";
    else
        cout<<"Second";
}