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
    int x, y;
    cin >> x >> y;
    bool f = false;
    if(!(x&y)){
        cout<<x<<" "<<y<<endl;
        return;
    }
    if (y > x)
    {
        swap(x, y);
        f = true;
    }
    int p,q;
    p = x;
    int Max = -1;
    for (int i = 0; i <= 31; i++)
    {
        int z = powl(2, i);
        if (y & z)
        {
            Max = i;
        }
    }
    int k = 0;
    bool pw=false;
    int ans = 0, m = y;
    for (int i = Max + 1; i >= 0; i--)
    {
        int z = powl(2, i);
        if ((i == Max + 1) && !(x & z))
        {
            if (abs(z - y) < m)
            {
                m = abs(z - y);
                ans = z;
            }
        }
        else if (!(x & z))
        {
            if (z & y)
            {
                k += z;
                if (abs(k - y) < m)
                {
                    m = abs(k - y);
                    ans = k;
                }
            }
            else if (abs(k + z - y) < m)
            {
                m = abs(k + z - y);
                ans = k + z;
                if(pw){
                    k+=z;
                }
            }
        }
        else if((x&z)&&(y&z)){
            pw=true;
        }
    }
    for (int i = 0; i <= 31; i++)
    {
        int z = powl(2, i);
        if (x & z)
        {
            Max = i;
        }
    }
    k=0;
    bool r=false;
    pw=false;
    for (int i = Max + 1; i >= 0; i--)
    {
        int z = powl(2, i);
        if ((i == Max + 1))
        {
            if (abs(z - x) < m)
            {
                r=true;
                m = abs(z - x);
                ans = z;
            }
        }
        else if (!(y & z))
        {
            if (z & x)
            {
                k += z;
                if (abs(k - x) < m)
                {
                    r=true;
                    m = abs(k - x);
                    ans = k;
                }
            }
            else if (abs(k + z - x) < m)
            {
                r=true;
                m = abs(k + z - x);
                ans = k + z;
                if(pw){
                    k+=z;
                }
            }
        }
        else if((x&z)&&(y&z)){
            pw=true;
        }
    }
    int f1=ans;
    if (f)
    {
        swap(y,f1);
        swap(p, ans);
    }
    if(r){
        cout<<f1<<" "<<y<<endl;
    }
    else{
        cout << p << " " << ans << endl;
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
