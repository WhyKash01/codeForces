#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int,pair<int,int>>
#define ppi pair<pair<int,int>,int>
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
    int n;
    cin>>n;
    string s1;
    cin>>s1;
    string s;
    s.push_back(s1[0]);
    for (int i = 1; i < n; i++)
    {
        if(s1[i]!=s1[i-1]){
            s.push_back(s1[i]);
        }
    }
    int n1=s.size();
    bool ans=false;
    int a=0,b=0;
    for (int i = 0; i < n1; i++)
    {
        if(s[i]=='0'){
            if(a==0){
                a=1;
            }
            else if(b==1){
                ans=true;
                break;
            }
        }
        else{
            if(b==0){
                b=1;
            }
            else if(a==1){
                ans=true;
                break;
            }
        }
    }
    if(ans||a==0||b==0){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
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