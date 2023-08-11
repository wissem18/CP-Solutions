#include "bits/stdc++.h"
 
using namespace std;
#define ll long long
//#define pi pair<int,int>
#define pll pair<ll,ll>
//double const pi= 3.141592653;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int MOD = 1e9 + 7;
bool isRBS(string s){
    if(s.length()%2)
        return false;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]=='(')
            st.push('(');
        else if(!st.empty())
            st.pop();
        else
            return false;
    }
    return st.empty();
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("triangles.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for (int i = 0; i < n; ++i) {
            if(s[i]=='(')
                cnt++;
            else
                cnt--;
        }
        if(cnt)
            cout<<-1<<endl;
        else{
            string x=s;
            reverse(x.begin(),x.end());
            if(isRBS(x)|| isRBS(s)){
                cout<<1<<endl;
                for (int i = 0; i < n; ++i) {
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<2<<endl;
                stack<int>st;
                vector<bool>test(s.size(), false);
                for (int i = 0; i < s.length(); ++i) {
                    if(s[i]=='('){
                        st.push(i);
 
                    }
                    else if(!st.empty()){
                        int ind=st.top();
                        st.pop();
                        test[i]=true;
                        test[ind]=true;
 
                    }
                }
                for (int i = 0; i < s.size(); ++i) {
                    if(test[i])
                        cout<<1<<" ";
                    else
                        cout<<2<<" ";
                }
                cout<<endl;
            }
        }
    }
}