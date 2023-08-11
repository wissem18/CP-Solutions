#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
void split(string s,vector<int>&a)
{
    stringstream ss(s);
    string word;
    while (ss >> word) {
        a.push_back(stoi(word));
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    int x=(n/5)*5;
    int y=((n+4)/5)*5;
    if(n-x<y-n)
        cout<<x;
    else
        cout<<y;
}