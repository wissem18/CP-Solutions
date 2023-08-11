#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
//int dx[] = {0, 0, -1, 1};
//int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
       int n,m,x1,y1,x2,y2;
       string d;
       cin>>n>>m>>x1>>y1>>x2>>y2>>d;
       set<pair<pair<int,int>,pair<int,int>>>s;
       int dx=0,dy=0;
       if(d[0]=='D')
           dx=1;
       else
           dx=-1;
       if(d[1]=='R')
           dy=1;
       else
           dy=-1;
       bool test= false;
       int nb=0;
       while(!s.count({{x1,y1},{dx,dy}})){
           s.insert({{x1,y1},{dx,dy}});
           if(x1==x2&&y1==y2){
               test=true;
               break;
           }
           bool b=false;
           if(x1==1){
               if(dx==-1)
                   b=true;
             dx=1;
           }
           if(x1==n){
               if(dx==1)
                   b=true;
             dx=-1;
           }
           if(y1==1){
               if(dy==-1)
                   b=true;
            dy=1;
           }
           if(y1==m){
               if(dy==1)
                   b=true;
           dy=-1;
           }
           x1+=dx;
           y1+=dy;
           nb+=b;
       }
        (test)?cout<<nb<<endl:cout<<-1<<endl;
    }
}