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
    cin >> n;
    bool f = false;
    int ans;
    for (int i = 5; i <= (2 * n) ; i += 2)
    {
        cout <<"? "<< i << " " << i + 1 << endl;
        cout.flush();
        int x;
        cin >> x;
        if (x == 1)
        {
            ans = i;
            f = true;
            break;
        }
    }
    if (f)
    {
        cout <<"! "<< ans << endl;
        cout.flush();
    }
    else
    {
        cout.flush();
        int x;
        cout <<"? "<< 1 << " " << 2 << endl;
        cout.flush();
        cin >> x;
        if (x == 1)
        {
            cout <<"! "<< 1 << endl;
            cout.flush();
        }
        else
        {
            cout <<"? "<< 1 << " " << 3 << endl;
            cout.flush();
            cin >> x;
            if(x==1){
                cout <<"! "<< 1 << endl;
                cout.flush();
            }
            else{
                cout <<"? "<< 2 << " " << 3 << endl;
                cout.flush();
                cin >> x;
                if(x==1){
                    cout <<"! "<< 2 << endl;
                    cout.flush();
                }
                else{
                    cout <<"! "<< 4<< endl;
                    cout.flush();
                }
            }
                
        }
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