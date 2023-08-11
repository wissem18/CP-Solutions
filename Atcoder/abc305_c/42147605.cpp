#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;

void split(string s, vector<int> &a) {
    stringstream ss(s);
    string word;
    while (ss >> word) {
        a.push_back(stoi(word));
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }
    int sx = -1, mx = 0;
    for (int i = 0; i < n; ++i) {
        if (sx != -1)
            break;
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                sx = j;
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                cnt++;
            }
        }
        mx = max(cnt, mx);
    }

    int sy = -1, my = 0;
    for (int i = 0; i < m; ++i) {
        if (sy != -1)
            break;
        for (int j = 0; j < n; ++j) {
            if (grid[j][i] == '#') {
                sy = j;
                break;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (grid[j][i] == '#') {
                cnt++;
            }
        }
        my = max(cnt, my);
    }
    if (mx == 1) {
        if (sy == 1) {
            sy--;
        }
        my++;
    }
    if (my == 1) {
        if (sx == 1) {
            sx--;
        }
        mx++;
    }

    pair<int, int> ans;

    if (my == 1 || mx == 1) {
        for (int i = sy; i < sy + my; ++i) {
            for (int j = sx; j < sx + mx; ++j) {
                if (grid[i][j] == '.') {
                    ans = {i + 1, j + 1};
                    break;
                }
            }
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if(grid[i][j]=='.'){
                    int cnt=0;
                    for (int k = 0; k < 4; ++k) {
                        int di=i+dx[k];
                        int dj=j+dy[k];
                        if(di>=0&&di<n&&dj>=0&&dj<m&&grid[di][dj]=='#'){
                            cnt++;
                        }
                    }
                    if(cnt>1){
                        ans={i+1,j+1};
                        break;
                    }
                }
            }
        }
    }
    cout << ans.first << " " << ans.second;
}