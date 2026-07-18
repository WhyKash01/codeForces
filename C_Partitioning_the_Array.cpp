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
vector<int> getFactors(int n) {
    vector<int> factors;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            factors.push_back(i);

            if(i != n / i)  
                factors.push_back(n / i);
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<int> factors=getFactors(n);
    int ans=1;
    vector<int>v1(n);
    for (auto x:factors)
    {
        if(x!=n){
            for (int i = 0; i < x; i++)
            {
                int Min=v[i];
                for (int j = 0; j < n/x; j++)
                {
                    Min=min(Min,v[i+x*j]);
                }
                for (int j = 0; j < n/x; j++)
                {
                    v1[i+x*j]=v[i+x*j]-Min;
                }
            }
            int Min=LLONG_MAX;
            for (int i = 0; i < n; i++)
            {
                if(v1[i]!=0){
                    Min=min(Min,v1[i]);
                }
            }
            if(Min==LLONG_MAX){
                ans++;
            }
            else{
                
                vector<int>f=getFactors(Min);
                for (auto z:f)
                {
                    if(z>1){
                        bool k=true;
                        for (int i = 0; i < n; i++)
                        {
                            if(v1[i]%z!=0){
                                k=false;
                                break;
                            }
                        }
                        if(k){
                            ans++;
                            break;
                        }
                    }
                }
                
            }
        }
    }
    cout<<ans<<endl;
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