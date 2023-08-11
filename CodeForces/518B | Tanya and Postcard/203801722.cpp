#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s, t;
    cin >> s >> t;
    vector<int> upper(26, 0), lower(26, 0);
    for (int i = 0; i < t.size(); ++i) {
        if (t[i] >= 'A' && t[i] <= 'Z') {
            upper[t[i] - 'A']++;
        } else {
            lower[t[i] - 'a']++;
        }
    }
    int x = 0, y = 0;
    vector<bool>vis(s.size(),false);
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (upper[s[i] - 'A'] > 0) {
                x++;
                upper[s[i] - 'A']--;
                vis[i]=true;
            }
        }
        else {
            if (lower[s[i] - 'a'] > 0) {
                x++;
                lower[s[i] - 'a']--;
                vis[i]=true;
            }
        }
    }
    for (int i = 0; i < s.size(); ++i) {
        if(!vis[i]){
            if (s[i] >= 'A' && s[i] <= 'Z') {
                if (lower[s[i] - 'A'] > 0) {
                    y++;
                    lower[s[i] - 'A']--;
                }
            } else {
                if (upper[s[i] - 'a'] > 0) {
                    y++;
                    upper[s[i] - 'a']--;
                }
            }
        }
    }
    cout<<x<<" "<<y;
}