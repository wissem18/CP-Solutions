#include "bits/stdc++.h"

using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 998244353;
const int N=5*1e5+5;
int a[N];
int n,k;
multiset<int> hi, lo;
ll sum = 0;
void balance() {
    while (lo.size() && hi.size() < k) {
        int x = *lo.begin();
        lo.erase(lo.begin());
        x *= -1;
        hi.insert(x);
        sum += x;
    }
    while (hi.size() > k) {
        int x = *hi.begin();
        hi.erase(hi.begin());
        sum -= x;
        lo.insert(-x);
    }
    while (hi.size() && lo.size() && (*hi.begin()) < (-(*lo.begin()))) {
        int x = *hi.begin();
        sum -= x;
        int y = -(*lo.begin());
        hi.erase(hi.begin());
        lo.erase(lo.begin());
        hi.insert(y);
        lo.insert(-x);
        sum += y;
    }
}
void add(int x) {
    hi.insert(x);
    sum += x;
    balance();
}
void rem(int x) {
    if (lo.count(-x)) {
        lo.erase(lo.find(-x));
        return;
    }
    hi.erase(hi.find(x));
    sum -= x;
    balance();
}

ll get(){
    return sum;
}

void update (int ind ,int v){
    rem(a[ind]);
    a[ind]=v;
    add(v);

}

void init(){
    sort(a,a+n);
    for(int i=0;i<n-k;i++)
        lo.insert(-a[i]);
    for(int i=n-k;i<n;i++)
        hi.insert(a[i]);

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int q;
cin>>n>>k>>q;
    for (int i = 0; i < n; ++i) {
        a[i]=0;
    }
    init();
while(q--){
    int x,y;
    cin>>x>>y;
    x--;
    update(x,y);
    cout<<get()<<endl;
}
}