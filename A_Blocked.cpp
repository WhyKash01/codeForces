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
    map<int,int>m;
    bool f=true;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(m[a[i]]==0){
            m[a[i]]++;
        }
        else{
            f=false;
        }
    }
    if(f){
        sort(a,a+n);
        for (int i = n-1; i >= 0; i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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