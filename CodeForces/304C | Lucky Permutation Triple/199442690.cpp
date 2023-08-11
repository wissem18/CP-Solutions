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
int n;
cin>>n;
if(n%2==0)
    cout<<-1;
else{
    if(n==1)
        cout<<0<<endl<<0<<endl<<0;
    else{
    int a[n],b[n];
    a[0]=(n+1)/2;
    b[0]=a[0]-1;
    int da=3,db=-1;
    for (int i = 1; i < n-2; ++i) {
        if(i==1){
            a[i]=a[i-1]-1;
            b[i]=b[i-1]+2;
            continue;
        }
       if(i%2==0){
           a[i]=i/2;
           b[i]=i/2;
       }
       else{
           a[i]=a[i-2]+da;
           b[i]=b[i-2]+db;
           swap(da,db);
       }
    }
    if(n%4==3){
       a[n-2]=n-2;
       b[n-2]=0;
       a[n-1]=0;
       b[n-1]=n-1;
    }
    else{
        b[n-2]=n-2;
        a[n-2]=0;
        b[n-1]=0;
        a[n-1]=n-1;
    }
        for (int i = 0; i < n; ++i) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
}