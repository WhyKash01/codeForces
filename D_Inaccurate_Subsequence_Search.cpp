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
    int a[n],b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<int,int>s1,s2;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        s1[b[i]]++;
    }
    int cnt=0;
    for (int i = 0; i < m; i++)
    {
        if(s1[a[i]]){
            s2[a[i]]++;
            if(s2[a[i]]<=s1[a[i]]){
                cnt++;
            }
        }
    }
    int x=0;
    if(cnt>=k){
        x++;
    }
    for (int i = m; i < n; i++)
    {

        if(s2[a[i-m]]){
            if(s2[a[i-m]]>s1[a[i-m]]){
                s2[a[i-m]]--;
            }
            else{
                s2[a[i-m]]--;
                cnt--;
            }
        }
        if(s1[a[i]]){
            s2[a[i]]++;
            if(s2[a[i]]<=s1[a[i]]){
                cnt++;
            }
        }
        if(cnt>=k){
            x++;
        }
    }
    cout<<x<<endl;
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
