#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 998244353;
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
 
bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }
 
    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}
 
void shift_solution(int & x, int & y, int a, int b, int cnt) {
    x += cnt * b;
    y -= cnt * a;
}
 
int find_all_solutions(int a, int b, int c, int minx, int miny) {
    int x, y, g;
    if (!find_any_solution(a, b, c, x, y, g))
        return 0;
    a /= g;
    b /= g;
 
    int sign_a = a > 0 ? +1 : -1;
    int sign_b = b > 0 ? +1 : -1;
 
    shift_solution(x, y, a, b, (minx - x) / b);
    if (x < minx)
        shift_solution(x, y, a, b, sign_b);
    int lx1 = x;
 
 
    shift_solution(x, y, a, b, -(miny - y) / a);
    if (y < miny)
        shift_solution(x, y, a, b, -sign_a);
    int lx2 = x;
 
 
    if (min(lx1,lx2)<minx)
        return 0;
    return 1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
int a,b,c;
cin>>a>>b>>c;
if(c%gcd(a,b))
    cout<<"No"<<endl;
else{
    if(find_all_solutions(a,b,c,0,0))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
}