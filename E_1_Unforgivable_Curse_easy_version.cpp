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
int M = 998244353;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s,t;
    string x,y;
    cin>>s>>t;
    x=s,y=t;
    sort(all(x));
    sort(all(y));
    if(y!=x){
        cout<<"NO\n";
    }
    else if(s==t){
        cout<<"YES\n";
    }
    else{
        if(n<4){
            cout<<"NO\n";
        }
        else if(n<6){
            string x="",y="";
            bool ans=true;
            if(n==5){
                if(s[2]!=t[2]){
                    ans=false;
                }
            }
            if(n==4){
                if(s[1]!=t[1]||s[2]!=t[2]){
                    ans=false;
                }
            }
            for (int i = 0; i < n-3; i++)
            {
                x.push_back(s[i]);
                x.push_back(s[n-i-1]);
                y.push_back(t[i]);
                y.push_back(t[n-1-i]);
            }
            sort(all(x));
            sort(all(y));
            if(x==y&&ans){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }
    return;
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
