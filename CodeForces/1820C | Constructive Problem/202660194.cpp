#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
int mex(int a[], int N) {
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        arr[i] = a[i];
    }
    // sort the array
    sort(arr.begin(), arr.end());
 
    int mex = 0;
    for (int idx = 0; idx < N; idx++) {
        if (arr[idx] == mex) {
            // Increment mex
            mex += 1;
        }
    }
    return mex;
}
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
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int m=mex(a,n);
        vector<int>idx;
        unordered_map<int,int>occ;
        for (int i = 0; i < n; ++i) {
            if(a[i]==m+1){
                idx.push_back(i);
            }
            occ[a[i]]++;
        }
        if(idx.empty())
        {
         sort(a,a+n);
         bool test=true;
            for (int i = 0; i <n ; ++i) {
                if(a[i]!=i){
                    test=false;
                    break;
                }
            }
            (!test)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
        else{
        bool test= true;
        for (int i = 0; i < idx.size()-1; ++i) {
            if(!test)
                break;
            for (int j = idx[i]; j < idx[i+1]; ++j) {
                if(a[j]<m){
                   occ[a[j]]--;
                   if(!occ[a[j]]){
                       test=false;
                       break;
                   }
                }
            }
        }
        (test)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    }
}