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
    vector<int>v(n,0);
    bool f=false;
    int prev;
    for (int i = n-1; i >=1; i--)
    {
        cout<<"? "<<i<<" "<<n<<endl;
        cout.flush();
        int x;
        cin>>x;
        if(x==0){
            if(f){
                f=false;
                break;
            }
            else{
                continue;
            }
        }
        if(!f){
            f=true;
            prev=x;
            for (int j = i; j <i+x ; j++)
            {
                v[j]=1;
            }
        }
        else if(x==prev){
            v[i-1]=1;
        }
        else{
            prev=x;
        }
    }
    cout<<"! ";
    if(!f){
        cout<<"IMPOSSIBLE\n";
        cout.flush();
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    cout.flush();
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
