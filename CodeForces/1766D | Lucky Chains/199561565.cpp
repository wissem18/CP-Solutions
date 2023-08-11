#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
const int MOD = 1e9 + 7;
const int MAXN=1e7+2;
int spf[MAXN];
void sieve()
{
    for (int i=1; i<MAXN; i++)
        spf[i] = i;
 
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
int n;
cin>>n;
sieve();
while(n--){
    int x,y;
    cin>>x>>y;
    if(__gcd(x,y)!=1)
        cout<<0<<endl;
    else{
        if(abs(x-y)==1)
            cout<<-1<<endl;
        else if(x%2&&y%2)
            cout<<1<<endl;
        else{
            int d=y-x;
            vector<int>divisors= getFactorization(d);
            int ans=1e9;
            for (auto c:divisors) {
                  ans=min(ans,(x/c+(x%c!=0))*c);
            }
            cout<<ans-x<<endl;
        }
    }
}
}