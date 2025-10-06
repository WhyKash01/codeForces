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
int M = 998244353;

void solve()
{
    int n;
    cin>>n;
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double a[n];
    double sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    double dis=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    sort(a,a+n);
    if(n==1){
        if(dis==sum){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        return;
    }
    if(dis>a[n-1]){
        if(sum>=dis){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    else{
        sum-=a[n-1];
        sum+=dis;
        if(sum>=a[n-1]){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
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
