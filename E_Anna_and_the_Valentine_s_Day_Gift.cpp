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
int M = 998244353;

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x=0,y=0;
        for (int j = 1; j <= 10; j++)
        {
            int z=powl(10*1LL,j);
            if(a[i]<z){
                x=j;
                break;
            }
            if(a[i]%z==0){
                y++;
            }
        }
        v.push_back(y);
        sum+=x;
    }
    sort(v.begin(),v.end());
    int l=v.size()-1;
    for (int i = l; i >= 0; i-=2)
    {
        sum-=v[i];
    }
    if(sum>m){
        cout<<"Sasha\n";
    }
    else{
        cout<<"Anna\n";
    }
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
