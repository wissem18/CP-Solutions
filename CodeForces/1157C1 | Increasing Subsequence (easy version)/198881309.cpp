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
int  n;
cin>>n;
int    a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    string res="";
    int lst=0;
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]>lst&&a[j]>lst){
            if(a[i]<=a[j]){
                lst=a[i];
                res+='L';
                i++;
            }
            else{
                lst=a[j];
                res+='R';
                j--;
            }
        }
        else if(a[i]>lst){
            lst=a[i];
            res+='L';
            i++;
        }
        else if(a[j]>lst){
            lst=a[j];
            res+='R';
            j--;
        }
        else
            break;
    }
    cout<<res.size()<<"\n";
    cout<<res;
}