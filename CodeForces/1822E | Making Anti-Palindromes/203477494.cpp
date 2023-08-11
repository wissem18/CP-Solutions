#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 1e9 + 7;
 
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
        if (n % 2)
            cout << -1 << endl;
        else {
            vector<int> occ(26, 0);
            vector<int> occd(26,0);
            for (int i = 0; i < n / 2; ++i) {
                if (s[i] == s[n - i - 1]) {
                    occd[s[i] - 'a']++;
                }
                occ[s[i] - 'a']++;
                occ[s[n - i - 1] - 'a']++;
            }
            int mx = 0;
            for (int i = 0; i < 26; ++i) {
                mx = max(mx, occ[i]);
            }
            if (mx > n / 2)
                cout << -1 << endl;
            else{
                int x=0;
                int nb=0;
                for (int i = 0; i < 26; ++i) {
                    x=max(x,occd[i]);
                    nb+=occd[i];
                }
                cout<<max(x,(nb+1)/2)<<endl;
            }
        }
    }
}