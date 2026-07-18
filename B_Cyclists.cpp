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
    int n,k,p,m;
    cin>>n>>k>>p>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    int ans=0;
    bool f=true;
    int z=a[p-1];

    for (int i = 0; i < n; i++)
    {
        if(i==p-1){
            int req=max(0LL,p-k);
            sort(v.begin(),v.end());
            for (int j = 0; j < v.size(); j++)
            {
                if(req>0){
                    z+=v[j];
                }
                else{
                    break;
                }
                req--;
            }
            if(m>=z){
                ans++;
                m-=z;
            }
            else{
                f=false;
            }
        }
        else{
            v.push_back(a[i]);
        }

    }
    if(!f){
        cout<<ans<<endl;
    }
    else{
        int c=a[p-1];
        int z1=n-k;
        int i=0;
        sort(v.begin(),v.end());
        while(z1>0){
            c+=v[i];
            i++;
            z1--;
        }
        ans+=m/c;
        cout<<ans<<endl;
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