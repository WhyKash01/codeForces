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
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    vpii v1,v2;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        v1.push_back({a[i],i});
    }
    int x=k/m;
    if(k%m!=0){
        x++;
    }
    sort(v1.begin(),v1.end(),[](pair<int,int>p1,pair<int,int>p2){
        if(p1.first==p2.first)return p1.second<p2.second;
        else return p1.first<p2.first;
    });
    for (int i = 0; i < x; i++)
    {
        v2.push_back({v1[i].second,v1[i].first});
    }
    sort(v2.begin(),v2.end());
    int sum=0;
    int c=0;
    for (int i = 0; i < x; i++)
    {
        if(v2[i].first==v1[x-1].second && k%m!=0){
            sum+=(v2[i].second+c)*(k%m);
            c+=k%m;
        }
        else{
            sum+=(v2[i].second+c)*m;
            c+=m;
        }
    }
    cout<<sum<<endl;
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
