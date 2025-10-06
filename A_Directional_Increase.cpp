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
    ll it=-1,sum=0,low=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]!=0){
            it=i;
            low=min(i*1LL,low);
        }
    }
    if(sum!=0){
        cout<<"No\n";
    }
    else{
        ll cnt=0;
        bool f=true;
        for (int i = low; i < it; i++)
        {
            if(i<it){
                if(a[i]>=0){
                    cnt+=a[i];
                }
                else{
                    cnt+=a[i];
                    if(cnt<=0){
                        f=false;
                        break;
                    }
                }
            }
        }
        if(it!=-1&&low!=0){
            f=false;
        }
        f?cout<<"Yes\n":cout<<"No\n";
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