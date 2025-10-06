#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
void solve()
{
    ll n;cin>>n;
    ll a[n];
    set<ll>s;
    map<ll,ll>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
        m[a[i]]++;
    }
    ll mix=0;
    for(auto i:s){
        if(i==mix){
            mix++;
        }
        else{
            break;
        }
    }
    if(s.size()==mix){
        if(n==mix){
        cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    }
    else{
        ll f=-1,last=-1;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==mix+1){
                if(f==-1){
                    f=i;
                }
                last=i;
            }
        }
        bool fa=true;
        for (int i = f; i < last; i++)
        {
            if(a[i]<mix){
                m[a[i]]--;
                if(m[a[i]]==0){
                    fa=false;
                    break;
                }
            }
        }
        fa?cout<<"Yes\n":cout<<"No\n";
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