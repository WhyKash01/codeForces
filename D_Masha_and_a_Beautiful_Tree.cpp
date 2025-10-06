#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll mod = 998244353;
ll ans=0;
bool divide(ll pre[],ll n,ll l1,ll h1,ll l2, ll h2){
    if(h1-l1==1){
        return true;
    }
    ll mid1=(h1+l1)/2;
    ll mid2=(h2+l2)/2;
    ll big=h2*(h2+1)/2-(mid2*(mid2+1)/2);
    ll small=mid2*(mid2+1)/2-l2*(l2+1)/2;
    ll x=pre[h1]-pre[mid1],y=pre[mid1]-pre[l1];
    bool f=true;
    if(y>x){
        f=false;
        ans++;
        swap(x,y);
    }
    if(x!=big||y!=small){
        return false;
    }
    bool z=true;
    if(f){
        z&=divide(pre,n,l1,mid1,l2,mid2);
        z&=divide(pre,n,mid1,h1,mid2,h2);
    }
    else{
        z&=divide(pre,n,l1,mid1,mid2,h2);
        z&=divide(pre,n,mid1,h1,l2,mid2);
    }
    return z;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll pre[n+1];
    pre[0]=0;
    for (int i = 1; i <= n; i++)
    {
        pre[i]=a[i-1]+pre[i-1];
    }
    ans=0;
    if(divide(pre,n,0,n,0,n)){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
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