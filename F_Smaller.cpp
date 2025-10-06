#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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
int M = 1000000007;

void solve()
{
    int n;
    cin>>n;
    int q,x;
    string s;
    int a=1,b=1;
    bool e=false,r=false;
    int cnt1=1,cnt2=1;
    for (int i = 0; i < n; i++)
    {
        cin>>q>>x>>s;
        if(q==1){
            for (int j = 0; j < s.size(); j++)
            {
                if(s[j]=='a'){
                    a+=x;
                }
                else{
                    e=true;
                }
            }
            
        }
        
        else{
            for (int j = 0; j < s.size(); j++)
            {
                if(s[j]=='a'){
                    b+=x;
                }
                else{
                    r=true;
                }
            }
        }
        if(r){
            cout<<"YES\n";
        }
        else if(!e&&a<b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
