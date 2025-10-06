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
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(k%2==1){
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==1){
                a[i]+=k;
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else if(k==2){
        for (int i = 0; i < n; i++)
        {
            if(a[i]%3==1){
                a[i]+=2;
            }
            else if(a[i]%3==2){
                a[i]+=4;
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for (int i = 0; i < n; i++)
        {
            int x=k-1;
            int y=a[i]%x;
            int z=x-y;
            a[i]+=z*k;
            cout<<a[i]<<" ";
        }
        cout<<endl;
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
