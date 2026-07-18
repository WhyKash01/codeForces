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
    if(n>k||k>=2*n){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        vector<int>q(n,2);
        vector<int>v;
        int x=k-n;
        int z=3;
        for (int i = 0; i < x; i++)
        {
            if(i==0){
                v.push_back(1);
                v.push_back(2);
                q[0]--;
                q[1]--;
            }
            else{
                v.push_back(z);
                v.push_back(z-2);
                q[z-1]--;
                q[z-3]--;
                z++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(q[i]==2){
                v.push_back(i+1);
                v.push_back(i+1);
            }
            else if(q[i]==1){
                v.push_back(i+1);
            }
        }
        
        for (int i = 0; i < 2*n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
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