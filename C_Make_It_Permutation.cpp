#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n,c,d;cin>>n>>c>>d;
    ll a[n];
    set<ll>s;
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(s.find(a[i])!=s.end()){
            ans++;
        }
        else{
            s.insert(a[i]);
        }
    }
    ans*=c;
    ll ans1=LLONG_MAX;
    ll x=1;
    ll cnt=0,ct=0;
    for (auto i=s.begin();i!=s.end();i++)
    {
        ll k=0;
        ct++;
        if(*i==x){
            x++;
            k+=(s.size()-ct)*c;
            ans1=min(ans1,k+cnt);
        }
        else{
            if(ct==1){
                ll q=(s.size()-ct+1)*c;
                ans1=min(ans1,d+q);
            }
            else{
                ll q=(s.size()-ct+1)*c;
                ans1=min(ans1,cnt+q);
            }
            k+=(s.size()-ct)*c;
            cnt+=(*i-x)*d;
            ans1=min(ans1,k+cnt);
            x=*i+1;
        }

    }
    cout<<ans1+ans<<endl;
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