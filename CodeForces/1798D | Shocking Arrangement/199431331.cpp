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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
       int a[n];
        queue<int>pos,neg;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            if(a[i]<=0)
                neg.push(a[i]);
            else
                pos.push(a[i]);
        }
        if(*max_element(a,a+n)==0)
            cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
     ll cur_sum=0;
        for (int i = 0; i < n; ++i) {
            if(cur_sum<0){
                int x=pos.front();
                pos.pop();
                cout<<x<<" ";
                cur_sum+=x;
            }
            else{
                int x=neg.front();
                neg.pop();
                cout<<x<<" ";
                cur_sum+=x;
            }
        }
        cout<<endl;
    }
    }
}