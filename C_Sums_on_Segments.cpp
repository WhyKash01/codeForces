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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1 && a[i] != 1)
        {
            k = i;
        }
    }
    set<int> s;
    int e1 = 0, e2 = 0, r1 = 0, r2 = 0;
    int curr1 = 0, curr2 = 0;
    vector<pair<int,int>>p(n+1,{0,0});
    vector<int>q(n+1,0);
    int e=0,r=0;
    int x=0,y=0;
    if (k != -1)
    {
        for (int i = k - 1; i >= 0; i--)
        {
            q[i]=q[i+1]+a[i];
            curr1 += a[i];
            e1 = min(e1, curr1);
            r1 = max(r1, curr1);
        }
        x=q[0],y=q[0];
        for (int i = 0; i < k; i++)
        {
            y=min(q[i],y);
            x=max(x,q[i]);
            p[i]={x,y};
        }

        for (int i = k-1; i >=0 ; i--)
        {
            e=min(e,p[i].second-q[i+1]);
            r=max(r,p[i].first-q[i+1]);
        }
    }
    for (int i = k + 1; i < n; i++)
    {
        q[i+1]=q[i]+a[i];
        curr2 += a[i];
        e2 = min(e2, curr2);
        r2 = max(r2, curr2);
    }
    x=q[n],y=q[n];
    for (int i = n-1; i >= k+1; i--)
    {
        y=min(q[i+1],y);
        x=max(q[i+1],x);
        p[i+1]={x,y};
    }
    
    for (int i = k+1; i < n; i++)
    {
        e=min(e,p[i+1].second-q[i]);
        r=max(r,p[i+1].first-q[i]);
    }
    for (int i = e; i <= r; i++)
    {
        s.insert(i);
    }
    if(k!=-1){

        x = e1 + e2, y = r1 + r2;
        for (int i = 0; i >= x; i--)
        {
            s.insert(a[k] + i);
        }
        for (int i = 0; i <= y; i++)
        {
            s.insert(a[k] + i);
        }
    }
    cout << s.size() << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
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
