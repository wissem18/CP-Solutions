#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 998244353;
int fact[262150];
void preprocess(){
fact[0]=1;
    for (int i = 1; i < 262150; ++i) {
       fact[i]=(fact[i-1]%MOD*1LL*i%MOD)%MOD;
    }
}
ll binpow(ll a, ll b, ll m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a )% m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t=1;
    preprocess();
    while(t--){
     int k;
     cin>>k;
     int n=(1<<k);
     vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            if(a[i]!=-1)
                a[i]--;
        }
        ll ans=1;
        for (int i = k-1; i >=0 ; --i) {//loop for all the k stages of the game from the stage k-->1
           //at each stage calculate the number of ways to pick the losers in this stage and promote the winners to
           //the next stage . if something gets impossible break and return 0
           int order=0;
           int picks=(1<<i);
           vector<int>newa(1<<i);
            for (int j = 0; j < (1<<i); ++j) {
             int f=a[2*j],s=a[2*j+1];
             //there are 3 main cases
             if(f==-1 && s==-1){
                 newa[j]=-1; //promote -1 for next stage and it will be processed in next stage
                 order++;  //we have to choose the order for these 2 pairs
             }
             else if(f!=-1&&s!=-1) {
                 if((f<(1<<i)&&s<(1<<i))||(f>=(1<<i)&&s>=(1<<i))) {//if the two opponents are in the same part no partition will be possible because one of the range [0,2^(k-1)] will be eliminated from this stage
                 ans=0;
                     break;
                 }
                 else{
                     newa[j]=min(s,f); //promote the minimum between them
                     picks--; //decrease the number of picks (choosing a number) in this stage because the team in this position is already chosen
                 }
             }
             else{
                //in this case a team is already choosen and another no
                int x=(f!=-1)?f:s;
                if(x<(1<<i)){
                    newa[j]=x;
                }
                else{
                    newa[j]=-1;
                    picks--;
                }
 
             }
            }
            if(!ans)
                break;
 
            //multiply by the permutation of picked numbers in this stage
            ans=(ans%MOD*fact[picks]%MOD)%MOD;
            //dont forget to multiply by the number of pairs that we have to choose the order also
            ans=(ans%MOD*binpow(2,order,MOD))%MOD;
            a=newa; //the new array for the next round
        }
        cout<<ans<<endl;
    }
}