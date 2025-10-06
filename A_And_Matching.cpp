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
    int n,m;
    cin>>n>>m;
    if(m==n-1){
        if(n==4){
            cout<<-1<<endl;
        }
        else{
            cout<<n/2-1<<" "<<n-1<<endl;
            cout<<n/2<<" "<<n/2+1<<endl;
            cout<<0<<" "<<n-1-(n/2+1)<<endl;
            for (int i = 1; i < n/2-2; i++)
            {
                cout<<i<<" "<<n-1-i<<endl;
            }
            
        }
    }
    else if(m==0){
        for (int i = 0; i < n/2; i++)
        {
            cout<<i<<" "<<n-1-i<<endl;
        }
    }
    else{
        cout<<m<<" "<<n-1<<endl;
        cout<<0<<" "<<n-1-m<<endl;
        for (int i = 1; i < n/2; i++)
        {
            if(i==m||i==n-1-m){
                continue;
            }
            cout<<i<<" "<<n-1-i<<endl;
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
