#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int t;
cin>>t;
while(t--){
    int q;
    cin>>q;
    int begin=0;
    int lst=0;
    int cnt=0;
    for (int i = 0; i < q; ++i) {
        int x;
        cin>>x;
        if(i==0){
            cout<<1;
            begin=x;
            lst=x;
        }
        else{
         if(!cnt){
             if(x>=lst){
                 cout<<1;
                 lst=x;
             }
             else{
              if(x<=begin){
                  cout<<1;
                  cnt++;
                  lst=x;
              }
              else
                  cout<<0;
             }
         }
         else{
           if(x>=lst&&x<=begin){
               cout<<1;
               lst=x;
           }
           else
               cout<<0;
         }
        }
    }
    cout<<endl;
}
}