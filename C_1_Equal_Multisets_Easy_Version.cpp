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
int MOD = 676767677;

void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    bool ans=true;
    vector<int>curr1(n+1,0);
    vector<int>curr2(n+1,0);
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        if(i<n-k||i>=k){
            if(b[i]!=-1 && b[i]!=a[i]){
                ans=false;
            }
        }
        else{
            curr1[a[i]]++;
            if(b[i]!=-1){
                curr2[b[i]]++;
            }
        }
    }
    
    
    if(ans){
        for (int i = 0; i < n; i++)
        {
            if(curr2[i+1]>curr1[i+1]){
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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