#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> m;
    set<ll>same;
    vector<ll> ele;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (m[a[i]] == 0)
        {
            ele.push_back(a[i]);
        }
        m[a[i]]++;
        if (m[a[i]] == 2)
        {
            same.insert(a[i]);
        }
    }

    sort(a, a + n);
    if (same.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ll small = -1, large = -1;
        sort(ele.begin(), ele.end());
        
        
        ll x=-1;
        bool f=false;
        for (int i = 0; i < ele.size(); i++)
        {
            if(m[ele[i]]==4){
                x=ele[i];
                small=x;
                large=x;
                break;
            }
            else if(m[ele[i]]==3&&i<(ele.size()-1)&&3*ele[i]>ele[ele.size()-1]){
                x=ele[i];
                small=ele[i];
                large=ele[ele.size()-1];
                break;
            }
            else if(m[ele[i]]==2){
                ll z=*same.rbegin();
                if(z!=ele[i]){
                    x=ele[i];
                    small=z;
                    large=z;
                    break;
                }
            }
            else{
                if(m[ele[i+1]]!=2&&i+1<ele.size()){
                    ll z=*same.rbegin();
                    if(ele[i+1]!=z&&2*z+ele[i]>ele[i+1]){
                        x=z;
                        small=ele[i];
                        large=ele[i+1];
                    }
                }
            }
        }
        if (large != -1 && small != -1)
        {
            cout << x << " " << x << " " << small << " " << large << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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