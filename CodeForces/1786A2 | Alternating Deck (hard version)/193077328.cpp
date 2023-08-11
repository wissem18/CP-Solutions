#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
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
     int n;
     cin>>n;
     int a1=0,a2=0,b1=0,b2=0;
     int i=1;
     int s=0;
        while(s+i<=n){
            if(i%4==0){
                a1+=i/2;
                a2+=i/2;
            }
            if(i%4==1){
                a1+=i/2+1;
                a2+=i/2;
            }
            if(i%4==2){
                b1+=i/2;
                b2+=i/2;
            }
            if(i%4==3){
                b1+=i/2;
                b2+=i/2+1;
            }
            s+=i;
            i++;
        }
        if(i%4==0){
            for (int j = 0; j < n-s; j++) {
                if(j%2==0)
                    a1++;
                else
                    a2++;
            }
        }
        if(i%4==1){
            for (int j = 0; j < n-s; j++) {
                if(j%2==0)
                    a1++;
                else
                    a2++;
            }
        }
        if(i%4==2){
            for (int j = 0; j < n-s; j++) {
                if(j%2==0)
                    b2++;
                else
                    b1++;
            }
        }
        if(i%4==3){
            for (int j = 0; j < n-s; j++) {
                if(j%2==0)
                    b2++;
                else
                    b1++;
            }
        }
        cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<nl;
    }
}