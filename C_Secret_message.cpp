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
    string a[k];
    for (int i = 0; i < k; i++)
    {
        cin>>a[i];
    }
    vector<vector<int>> dp(26,vector<int>(n+1,0));
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[a[i][j]-'a'][j]=1;
        }
    }
    vector<int>v;
    for (int i = 1; i <= n/2+5; i++)
    {
        if(n%i==0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    string ans;
    
    for (int i = 0; i < v.size(); i++)
    {
        string q;
        int l=v[i];
        bool p=true;
        for (int j = 0; j < l; j++)
        {
            bool f=true;
            for (int e = 0; e < 26; e++)
            {
                int curr=j;
                bool r=true;
                while(curr<n){
                    if(dp[e][curr]==0){
                        r=false;
                        break;
                    }
                    curr+=l;
                }
                if(r==true){
                    char c='a'+e;
                    q.push_back(c);
                    f=false;
                    break;
                }
            }
            if(f==true){
                p=false;
                break;
            }
        }
        if(p==true){
            ans=q;
            break;
        }
    }
    int q=n/ans.size();
    for (int i = 0; i < q; i++)
    {
        cout<<ans;
    }
    cout<<endl;
    
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
