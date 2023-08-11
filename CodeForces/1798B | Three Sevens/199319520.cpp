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
    cin >> t;
    while (t--) {
    int m;
    cin>>m;
    vector<int>a[m];
        for (int i = 0; i < m; ++i) {
            int n;
            cin>>n;
            for (int j = 0; j < n; ++j) {
                int x;
                cin>>x;
                a[i].push_back(x);
            }
        }
        vector<int>ans;
        bool test=true;
        set<int>s;
        for (int i = m-1; i >=0 ; --i) {
            bool ok=false;
            for (int j = 0; j < a[i].size(); ++j) {
                if(!ok&&!s.count(a[i][j])){
                    ok=true;
                    ans.push_back(a[i][j]);
                }
                s.insert(a[i][j]);
            }
            if(!ok){
                test=false;
                break;
            }
        }
        if(test){
            for (int i = m-1; i >=0 ; --i) {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}