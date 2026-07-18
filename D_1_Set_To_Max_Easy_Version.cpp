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
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    set<pair<int,int>>s;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        s.insert({-b[i],i});
    }
    vector<int>v(n,0);
    bool f=true;
    for (auto x:s)
    {
        int z=x.first;
        int it=x.second;
        if(a[it]==b[it]){
            v[it]=1;
        }
        else if(a[it]>b[it]){
            f=false;
            break;
        }
        else{
            bool e=false;
            for (int i = it+1; i < n; i++)
            {
                if(b[i]>=b[it]&&a[i]==b[it]){
                    e=true;
                    break;
                }
                else if(b[i]<b[it]||a[i]>b[it]){
                    break;
                }
            }
            for (int i = it-1; i >= 0; i--)
            {
                if(b[i]>=b[it]&&a[i]==b[it]){
                    e=true;
                    break;
                }
                else if(b[i]<b[it]||a[i]>b[it]){
                    break;
                }
            }
            if(e){
                v[it]=1;
            }
            else{
                f=false;
                break;
            }
        }
    }
    if(f){
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