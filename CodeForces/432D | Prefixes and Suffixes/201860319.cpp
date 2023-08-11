#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);[
    //freopen("output.txt", "w", stdout);
    string s;
    cin>>s;
    vector<int>pi= prefix_function(s);
    vector<int>ans;
    vector<int>occ(s.size()+1,0);
    for (int i = 1; i <s.size() ; ++i) {
        occ[pi[i]]++;
    }
 
 
    for (int i = s.size()-1; i > 0; i--)
        occ[pi[i-1]] += occ[i];
    int j=pi[s.size()-1];
    while(j){
        ans.push_back(j);
        j=pi[j-1];
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()+1<<endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout<<ans[i]<<" "<<occ[ans[i]]+1<<endl;
    }
    cout<<s.size()<<" 1"<<endl;
}