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
    mt19937 mt(727);
    uniform_int_distribution uni(1,3);
    int n;
    cin>>n;
    int a[3]={1,2,3};
    while(true){
        int z;
        cout<<"? "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        cout.flush();
        cin>>z;
        if(z==0){
            cout<<"! "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            break;
        }
        a[uni(mt)%3]=z;
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
