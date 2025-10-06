#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    set<ll>s;
    for (int i = 0; i < n; i++)
    {
        s.insert(i+1);
    }
    ll ans[n];
    if(n%2==0){
        ll z=-1;
        for (int i = 0; i < 30; i++)
        {
            if(1<<i&n){
                z=i;
            }
        }
        z++;
        ans[n-1]=n;
        ll y=1<<z;
        y--;
        cout<<y<<endl;
        ll req=y^n;
        if(req<5){
            
            s.erase(n);
            if(req==1){
                for (int i = 0; i < 4; i++)
                {
                    s.erase(i+1);
                }
                ans[n-2]=1;
                ans[n-3]=3;
                ans[n-4]=4;
                ans[n-5]=2;
            }
            else{
                for (int i = 0; i < 3; i++)
                {
                    s.erase(i+1);
                }
                s.erase(5);
                ans[n-2]=3;
                ans[n-3]=2;
                ans[n-4]=1;
                ans[n-5]=5;
            }
        }
        else{
            s.erase(req);
            s.erase(req-1);
            s.erase(3);
            s.erase(1);
            ans[n-2]=req;
            ans[n-3]=req-1;
            ans[n-4]=3;
            ans[n-5]=1;
        }
        for (int i = 0; i < n-5; i++)
        {
            ans[i]=*s.begin();
            s.erase(*s.begin());
        }
    }
    else{
        cout<<n<<endl;
        s.erase(n);
        s.erase(n-1);
        s.erase(3);
        s.erase(1);
        ans[n-1]=n;
        ans[n-2]=n-1;
        ans[n-3]=3;
        ans[n-4]=1;
        for (int i = 0; i < n-4; i++)
        {
            ans[i]=*s.begin();
            s.erase(*s.begin());
        }
    }
    ll k=0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            k&=ans[i];
        }
        else{
            k|=ans[i];
        }
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin>>tc;
    while (tc--)
        solve();
    return 0;
}