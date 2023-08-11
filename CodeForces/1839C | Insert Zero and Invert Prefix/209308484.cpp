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
    int n;
    cin>>n;
    int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        if(a[n-1]==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
           vector<int>ans;
            int i=n-1;
            while(i>=0){
                if(a[i]==0){
                    int j=i-1;
                    while(j>=0&&!a[j]){
                        cout<<0<<" ";
                        j--;
                    }
                    i=j;
                }
                else{
                    int j=i;
                    while(j>=0&&a[j]){
                        cout<<0<<" ";
                        j--;
                    }
                    cout<<i-j<<" ";
                    i=j;
                }
            }
            if(!a[0])
                cout<<0;
            cout<<endl;
        }
    }
}