#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
set<pair<int,int>>st;
set<pair<int,int>>b;
string a[2];
bool vis[2][200005];
int m;
bool bfs(int i,int j){
    queue<pair<int,int>>q;
    q.push({i,j});
    st.insert({i,j});
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        bool v=false;
        if(x==0){
            if(!v&&a[1][y]=='B'&&!vis[1][y]){
                q.push({1,y});
                st.insert({1,y});
                v= true;
                vis[1][y]= true;
            }
            if(!v&&y+1<m&&a[0][y+1]=='B'&&!vis[0][y+1]){
                q.push({0,y+1});
                st.insert({0,y+1});
                 v= true;
                vis[0][y+1]=true;
            }
        }
        else{
            if(!v&&a[0][y]=='B'&&!vis[0][y]){
                q.push({0,y});
                st.insert({0,y});
                  v= true;
                vis[0][y]=true;
            }
            if(!v&&y+1<m&&a[1][y+1]=='B'&&!vis[1][y+1]){
                q.push({1,y+1});
                st.insert({1,y+1});
               v=true;
                vis[1][y+1]=true;
            }
        }
    }
    return (b==st);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
 
while(t--){
cin>>m;
cin>>a[0]>>a[1];
b.clear();
    for (int i = 0; i < m; ++i) {
        if(a[0][i]=='B'){
            b.insert({0,i});
        }
        if(a[1][i]=='B'){
            b.insert({1,i});
        }
    }
    bool test=false;
    bool found=false;
    for (int i = 0; i < m; ++i) {
        if(a[0][i]=='B'){
            st.clear();
            memset(vis,false,sizeof vis);
          test|= bfs(0,i);
          found= true;
        }
        if(a[1][i]=='B'){
            st.clear();
            memset(vis,false,sizeof vis);
            test|= bfs(1,i);
            found= true;
        }
        if(found)
            break;
    }
    (test)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
}