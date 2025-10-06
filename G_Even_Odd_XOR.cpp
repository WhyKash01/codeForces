#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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
int M = 1000000007;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    a[0]=1,a[1]=2,a[2]=3;
    int cnt=4;
    for (int i = 3; i < n; i+=4)
    {
        if(i+4<=n){
            a[i]=cnt++;
            a[i+1]=cnt++;
            a[i+2]=cnt++;
            a[i+3]=cnt++;
        }
    }
    if((n-3)%4==1){
        a[n-1]=0;
    }
    else if((n-3)%4==2){
        a[n-1]=0;
        a[n-2]=1LL<<21;
        a[n-3]+=1LL<<21;
    }
    else if((n-3)%4==3){
        a[n-1]=0;
        a[n-2]=1LL<<21;
        a[n-3]=1LL<<21;
        a[n-3]+=1LL<<20;
        a[n-4]+=1LL<<20;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
