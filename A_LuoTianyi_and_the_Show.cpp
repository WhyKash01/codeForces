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
    int n, k;
    cin >> n >> k;
    int a[n];
    int x = 0, y = 0;
    vector<int> v;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
        {
            x++;
        }
        else if (a[i] == -2)
        {
            y++;
        }
        else
        {
            if (m[a[i]] == 0&&a[i]<=k)
            {
                v.push_back(a[i]);
            }
            m[a[i]]++;
        }
    }
    sort(all(v));
    if(v.size()==0){
        cout<<min(k,max(x,y))<<endl;
    }
    else{
        int s=v.size();
        int ans1=min(k,s+max(x,y));
        if(ans1==k){
            cout<<k<<endl;
            return;
        }
        int Max=ans1;
        for (int i = 0; i < v.size(); i++)
        {
            int l=v[i]-1;
            int r=k-v[i];
            int x1=i;
            int y1=s-i-1;
            int ans=min(l,x1+x)+min(r,y1+y)+1;
            Max=max(ans,Max);
        }
        cout<<Max<<endl;
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
