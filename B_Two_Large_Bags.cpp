#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    set<ll> s;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        s.insert(a[i]);
    }
    set<ll> ve;
    for (auto i : s)
    {
        ve.insert(i);
        ll curr=i;
        while(m[i]>2){
            curr++;
            if(m[curr]==0){
                if(m[i]==3){
                    m[curr]++;
                    m[i]--;
                }
                else{
                    m[curr]+=2;
                    m[i]-=2;
                }
                ve.insert(curr);
            }
            else if(m[curr]==1){
                m[curr]++;
                m[i]--;
            }
        }
    }
    vector<ll> v;
    for (auto i : ve)
    {
        v.push_back(i);
    }
    bool ans = true;
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (m[v[i]] == 1)
        {
            ans = false;
            break;
        }
        if (m[v[i]] % 2 != 0)
        {
            ll curr = i;
            bool x = false;
            for (int j = i + 1; j < v.size(); j++)
            {
                if (v[j] - 1 != v[curr])
                {
                    false;
                    break;
                }
                else
                {
                    if (m[v[j]] % 2 != 0)
                    {
                        x = true;
                        m[v[j]]++;
                        break;
                    }
                    else
                    {
                        curr++;
                    }
                }
            }
            if (!x)
            {
                ans = false;
                break;
            }
        }
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}