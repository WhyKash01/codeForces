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
    int n,k;
    cin>>n>>k;
    int a[n];
    int l=0,r=n-1;
    int x=n-2;
    if(n<42){
        int p=powl(2,n-1);
        if(k>p){
            cout<<-1<<endl;
            return;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(x<=40){
            int z=powl(2,x);
            if(k>z){
                a[r]=i;
                r--;
                k-=z;
            }
            else{
                a[l]=i;
                l++;
            }
        }
        else{
            a[l]=i;
            l++;
        }
        x--;
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
