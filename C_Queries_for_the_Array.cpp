#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin>>s;
    int len=0;
    int state=1;
    set<pair<int,int>>st;
    bool ans=true;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1'||s[i]=='0'){
            int x=1;
            if(s[i]=='0'){
                state=0;
                x=0;
            }
            else if(state==0){
                ans=false;
                break;
            }
            if(st.empty()){
                if(len<2){
                    // cout<<i<<" ";
                    if(x==0){
                        ans=false;
                        break;
                    }
                }
                else{
                    st.insert({-len,x});
                }
            }
            else if(-st.begin()->first==len){
                if(st.begin()->second!=x){
                    ans=false;
                    break;
                }
            }
            else{
                st.insert({-len,x});
            }
        }
        else if(s[i]=='-'){
            if(!st.empty()){
                if(-st.begin()->first==len){
                    if(len>2&&st.begin()->second==1){
                        st.insert({st.begin()->first+1,st.begin()->second});
                    }
                    st.erase(st.begin());
                    state=st.begin()->second;
                }
            }
            len--;
        }
        else{
            len++;
        }
    }
    if(ans){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}