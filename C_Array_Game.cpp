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
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(m>2){
        cout<<0<<endl;
    }
    else if(m==1){
        sort(a,a+n);
        int Min=a[0];
        for (int i = 0; i < n-1; i++)
        {
            Min=min(Min,(a[i+1]-a[i]));
        }
        cout<<Min<<endl;
    }
    else{
        sort(a,a+n);
        int Min=a[0]; 
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int x=abs(a[i]-a[j]);
                int it=upper_bound(a,a+n,x)-a;
                Min=min(Min,abs(a[i]-a[j]));
                if(it==n){
                    Min=min(Min,abs(a[it-1]-x));
                }
                else if(it==0){
                    Min=min(Min,abs(a[it]-x));
                }
                else{
                    Min=min(Min,abs(a[it]-x));
                    Min=min(Min,abs(a[it-1]-x));
                }    
            }
        }
        cout<<Min<<endl;
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
