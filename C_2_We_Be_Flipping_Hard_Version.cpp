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
int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>b(n,0);
    int negSum=0;
    int m=0;
    int z=-1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<0){
            negSum-=a[i];
        }
        else{
            b[i]=negSum-a[i];
            if(m<b[i]){
                z=i;
            }
            m=max(m,b[i]);
        }
    }
    vector<int>v1,v2,v3;
    if(m>0){
        for (int i = 0; i < z; i++)
        {
            if(a[i]>0){
                if(i==z-1){
                    v1.push_back(i+1);
                }
                else if(a[i+1]<0){
                    v1.push_back(i+1);
                }
            }
            else{
                if(i<z-1){
                    if(a[i+1]>0){
                        v2.push_back(i+1);
                    }
                }
            }
        }
        v3.push_back(z+1);
    }
    cout<<v1.size()+v2.size()+v3.size()<<endl;
    for (auto x :v1)
    {
        cout<<x<<" ";
    }
    for (int i=v2.size()-1;i>=0;i--)
    {
        cout<<v2[i]<<" ";
    }
    for (auto x :v3)
    {
        cout<<x<<" ";
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