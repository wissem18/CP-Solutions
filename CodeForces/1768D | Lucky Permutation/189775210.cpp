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
const int N=2e5+5;
int parent[N];
int sz[N];
 
void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}
 
 
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
 
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
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
       for (int i = 1; i <=n ; ++i) {
           make_set(i);
       }
       for (int i = 1; i <=n ; ++i) {
           union_sets(a[i-1],i);
       }
       //nbr of minimum swaps to sort the permutation is equal to n-nb of cycles
       //it can be also the sum of (sz-1) of all cycles
       int ans=0;
       for (int i = 1; i <=n ; ++i) {
           if(find_set(i)==i){
               ans+=sz[i]-1;
           }
       }
       ans++;
       //for the permutation with one inversion we change the order of two consecutive elements to get it
       //so if the two consecutive elements are in the same cycle the change will produce another cycle otherwise the number of cycles will decrease by 1
       for (int i = 1; i <n ; ++i) {
           if(find_set(i)==find_set(i+1)){
               ans-=2;
               break;
           }
       }
       cout<<ans<<nl;
   }
}