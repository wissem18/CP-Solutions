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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool test = true;
        vector<int> pos[4];
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'm' || s[i] == 'M') {
                pos[0].push_back(i);
            }
            else if (s[i] == 'e' || s[i] == 'E') {
                pos[1].push_back(i);
            }
            else if (s[i] == 'o' || s[i] == 'O') {
                pos[2].push_back(i);
            }
            else if (s[i] == 'w' || s[i] == 'W') {
                pos[3].push_back(i);
            }
            else{
                test=false;
                break;
            }
        }
        if(!test)
            cout<<"NO"<<nl;
        else{
            for (int i = 0; i < 4; ++i) {
                if(pos[i].empty()){
                    test=false;
                    break;
                }
                for (int j = 0; j < pos[i].size()-1; ++j) {
                    if(pos[i][j]+1!=pos[i][j+1]){
                        test=false;
                        break;
                    }
                }
                if(i!=3&&!pos[i+1].empty()){
                if(pos[i][0]>pos[i+1][0]){
                    test=false;
                    break;
                }
            }
            }
            (test)?cout<<"YES"<<nl:cout<<"NO"<<nl;
        }
 
    }
}
 