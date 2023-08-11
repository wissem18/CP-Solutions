#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
int spf(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf(x));
        x = x / spf(x);
    }
    return ret;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int a,b;
cin>>a>>b;
if(a==b)
    cout<<0<<endl;
else{
int x=gcd(a,b);
vector<int>fa= getFactorization(a/x);
vector<int>fb= getFactorization(b/x);
if((!fa.empty()&&fa[fa.size()-1]>5)||(!fb.empty()&&fb[fb.size()-1]>5))
    cout<<-1<<endl;
else
    cout<<fa.size()+fb.size()<<endl;
}
}