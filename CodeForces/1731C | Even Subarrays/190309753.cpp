#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
const char nl = '\n';
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD =1e9+7;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    vector<int> parfait;
    for (int i = 0; i*i<=4*1e5; ++i) {
        parfait.push_back(i*i);
    }
    while(t--){
        ll n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        ll ans=0;
        vector<int>occ(2*n+1,0);
        int pre=0;
        occ[pre]++;
        for (int i = 0; i < n; ++i) {
            pre^=a[i];
            ans+=i+1;
            for (int j = 0; j < parfait.size(); ++j) {
                int x=pre^parfait[j];
                if(x>2*n)
                    break;
                ans-=occ[x];
            }
            occ[pre]++;
        }
        cout<<ans<<nl;
    }
 
}