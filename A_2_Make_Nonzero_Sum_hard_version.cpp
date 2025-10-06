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
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x=0;
    int l=-1;
    vector<pii>v;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0){
            v.push_back({i+1,i+1});
            l++;
        }
        else{
            if(x==a[i]){
                v[l].second=i+1;
                x=0;
            }
            else if(x==0){
                x=a[i];
                v.push_back({i+1,i+1});
                l++;
            }
            else{
                v.push_back({i+1,i+1});
                x=0;
                l++;
            }
        }
    }
    if(x!=0){
        cout<<-1<<endl;
        return;
    }
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
