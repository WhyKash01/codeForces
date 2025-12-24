#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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
int M = 1000000007;

void solve()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    map<int, int> m;
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i};
        m[x]++;
    }
    for (auto i : m)
    {
        if (i.second==1)
        {
            f = false;
            break;
        }
    }
    sort(a,a+n);
    if (f)
    {
        int b[n];
        int l=a[0].second,curr=a[0].first;
        for (int i = 1; i < n; i++)
        {
            if(a[i].first==a[i-1].first){
                b[a[i].second]=a[i-1].second;
            }
            else{
                b[l]=a[i-1].second;
                l=a[i].second;
                curr=a[i+1].first;
            }
        }
        b[l]=a[n-1].second;
        cout<<n<<endl;
        for (int i = 0; i < n; i++)
        {
            cout << b[i] + 1 << " ";
        }
        cout << endl;
    }
    else
    {
        int b[n];
        b[a[0].second] = a[n - 1].second;
        cout << n - 1 << endl;
        for (int i = 1; i < n; i++)
        {
            b[a[i].second] = a[i - 1].second;
        }

        for (int i = 0; i < n; i++)
        {

            cout << b[i] + 1 << " ";
        }
        cout << endl;
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
