#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    set<ll> s;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        if (m[a[i]] > 1)
        {
            s.insert(a[i]);
        }
    }
    if (s.size() > 3)
    {
        cout << "YES\n";
        
        ll x1=*s.begin();
        ll x2=x1;
        if(m[*s.begin()]<4){
            s.erase(*s.begin());
        }
        ll y1=*s.begin();
        ll y3=y1;
        ll y2=*s.rbegin();
        ll y4=y2;
        if(m[*s.rbegin()]<4){
            s.erase(*s.rbegin());
        }
        ll x3=*s.rbegin();
        ll x4=x3;
        cout <<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<" "<< endl;
    }
    else
    {
        bool ans = false;
        ll x = 0;
        set<ll>se;
        for (auto i : s)
        {
            x += (m[i]/2)*2;
            if(m[i]>3){
                se.insert(i);
            }
        }
        if (x >= 8)
        {
            cout << "YES\n";
            ll x1=*s.begin();
            ll x2=x1;
            if(m[*s.begin()]<4){
                s.erase(*s.begin());
            }
            ll y1=*s.begin();
            ll y3=y1;
            ll y2=*s.rbegin();
            ll y4=y2;
            if(m[*s.rbegin()]<4){
                s.erase(*s.rbegin());
            }
            ll x3=*s.rbegin();
            ll x4=x3;
            cout <<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<" "<< endl;
        }
        else{
            cout<<"NO\n";
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