#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9+7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>a[i][j];
        }
    }
    int x1=a[0][1]+a[0][2];
    int y1=a[1][0]+a[1][2];
    int z1=a[2][0]+a[2][1];
    int b=x1-y1,c=y1-z1;
    int x=1;
    int y=x+b;
    int z=y+c;
   while(true){
       if(x1+x==(x+y+z)&&x>0&&y>0&&z>0){
           break;
       }
       x++,y++,z++;
   }
    a[0][0]=x;
    a[1][1]=y;
    a[2][2]=z;
    for (int i = 0; i <3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
    }
}