#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vectortor<int>
#define vvi vectortor<vectortor<int>>
#define vpii vectortor<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int M = 1e9 + 7;
int ans(vector<int> a)
{
    for (int i = 0; i < a.size() - 2; i++)
    {
        if (__gcd(a[i], a[i + 1]) > __gcd(a[i + 1], a[i + 2]))
        {
            return i + 1;
        }
    }
    return -1;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int no = 0, e = 0, w = 0, sw = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            no++;
        }
        else if (s[i] == 'E')
        {
            e++;
        }
        else if (s[i] == 'S')
        {
            sw++;
        }
        else
        {
            w++;
        }
    }
    int x = max(max(no, sw), max(e, w));
    if ((e - w) % 2 != 0 || (no - sw) % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (x == 1)
        {
            if (no && sw && e && w)
            {
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'N' || s[i] == 'S')
                    {
                        cout << "H";
                    }
                    else
                    {
                        cout << "R";
                    }
                }
                cout << endl;
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            int hz, ver;
            if (no == sw)
            {
                hz = 0;
            }
            else
            {
                hz = no - sw;
            }
            if (e == w)
            {
                ver = 0;
            }
            else
            {
                ver = e - w;
            }
            if (ver == 0 && hz == 0)
            {
                if (no > 1)
                {
                    int p = no - 2, q = e;
                    int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'N')
                        {
                            if (ct1 < p)
                            {
                                cout << "R";
                            }
                            else
                            {
                                (ct1 % 2 == 0) ? cout << "R" : cout << "H";
                            }
                            ct1++;
                        }
                        if (s[i] == 'S')
                        {
                            if (ct2 < p)
                            {
                                cout << "R";
                            }
                            else
                            {
                                (ct2 % 2 == 0) ? cout << "R" : cout << "H";
                            }
                            ct2++;
                        }
                        if (s[i] == 'E')
                        {
                            if (ct3 < q)
                            {
                                cout << "R";
                            }
                            else
                            {
                                (ct3 % 2 == 0) ? cout << "R" : cout << "H";
                            }
                            ct3++;
                        }
                        if (s[i] == 'W')
                        {
                            if (ct4 < q)
                            {
                                cout << "R";
                            }
                            else
                            {
                                (ct4 % 2 == 0) ? cout << "R" : cout << "H";
                            }
                            ct4++;
                        }
                    }
                    cout << endl;
                }
                else
                {
                    int p = no, q = e - 2;
                    int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == 'N')
                        {
                            if (ct1 < p)
                            {
                                cout << "R";
                            }
                            else
                            {
                                (ct1 % 2 == 0) ? cout << "R" : cout << "H";
                            }
                            ct1++;
                        }
                        if (s[i] == 'S')
                        {
                            if (ct2 < p)
                            {
                                cout << "R";
                            }
                            else
                            {
                                (ct2 % 2 == 0) ? cout << "R" : cout << "H";
                            }
                            ct2++;
                        }
                        if (s[i] == 'E')
                        {
                            if (ct3 < q)
                            {
                                cout << "R";
                            }
                            else
                            {
                                (ct3 % 2 == 0) ? cout << "R" : cout << "H";
                            }
                            ct3++;
                        }
                        if (s[i] == 'W')
                        {
                            if (ct4 < q)
                            {
                                cout << "R";
                            }
                            else
                            {
                                (ct4 % 2 == 0) ? cout << "R" : cout << "H";
                            }
                            ct4++;
                        }
                    }
                    cout << endl;
                }
            }
            else
            {
                int p = min(no, sw), q = min(e, w);
                int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == 'N')
                    {
                        if (ct1 < p)
                        {
                            cout << "R";
                        }
                        else
                        {
                            (ct1 % 2 == 0) ? cout << "R" : cout << "H";
                        }
                        ct1++;
                    }
                    if (s[i] == 'S')
                    {
                        if (ct2 < p)
                        {
                            cout << "R";
                        }
                        else
                        {
                            (ct2 % 2 == 0) ? cout << "R" : cout << "H";
                        }
                        ct2++;
                    }
                    if (s[i] == 'E')
                    {
                        if (ct3 < q)
                        {
                            cout << "R";
                        }
                        else
                        {
                            (ct3 % 2 == 0) ? cout << "R" : cout << "H";
                        }
                        ct3++;
                    }
                    if (s[i] == 'W')
                    {
                        if (ct4 < q)
                        {
                            cout << "R";
                        }
                        else
                        {
                            (ct4 % 2 == 0) ? cout << "R" : cout << "H";
                        }
                        ct4++;
                    }
                }
                cout << endl;
            }
        }
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
