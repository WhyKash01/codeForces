#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
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
int M = 1e9+7;

void solve()
{
    int n,c;
    cin>>n>>c;
    int a[n];
    int pref[n+1];
    pref[0]=0;
    int Max=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        Max=max(Max,a[i]);
        pref[i+1]=pref[i]+a[i];
    }
    bool f=false;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=Max){
            if(pref[i+1]+c>=Max){
                cout<<i<<" ";
            }
            else{
                cout<<i+1<<" ";
            }
        }
        else{
            if(f){
                cout<<i<<" ";
            }
            else if(i==0||a[0]+c<Max){
                f=true;
                cout<<"0 ";
            }
            else{
                cout<<i<<" ";
            }
        }
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
