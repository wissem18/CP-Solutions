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
const int N=2e5;
pi tree[4*N];
int A[N];
int n;
pi merge(pi x,pi y){
    return  {max(x.first,y.first),min(x.second,y.second)};//also sum, max, gcd, xor, or, and etc...
}
 
//building the initial segment tree
void build(int node=0 ,int start=0,int end=n-1){
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = {A[start],A[start]};
        return ;
    }
    else
    {
        int left = node*2+1;
        int right = left+1;
        int mid = (start+end)/2;
        // Recurse on the left child
        build(left, start, mid);
        // Recurse on the right child
        build(right, mid+1, end);
        // Internal node will have the  merge of both of its children
        tree[node] = merge(tree[left] , tree[right]);
    }
}
 
//answering the query for the range [l..r]
pi query(int l, int r,int node=0, int start=0, int end=n-1)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return {0,1e9};///!!!!NB  this value change depending on the merge
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int left = node*2+1;
    int right = left+1;
    int mid = (start+end)/2;
    pi p1 = query(l,  r,left, start, mid);
    pi p2 = query( l, r,right, mid+1, end);
    return merge(p1 , p2);
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
  int t;
  cin>>t;
  while(t--){
      cin>>n;
      for (int i = 0; i < n; ++i) {
          cin>>A[i];
      }
      if(n>3){
      build();
      int l=0,r=n-1;
      bool test=false;
      while(l<r){
          int mn= query(l,r).second;
          int mx= query(l,r).first;
          if(mn==A[l]||mx==A[l])
              l++;
          else if(mx==A[r]||mn==A[r])
              r--;
          else
          {
              test= true;
              break;
          }
      }
      if(test)
          cout<<l+1<<" "<<r+1<<nl;
      else
          cout<<-1<<nl;
      }
      else{
          cout<<-1<<nl;
      }
 
  }
 
}