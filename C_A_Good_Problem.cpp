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
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    if(n%2==1){
        cout<<l<<endl;
    }
    else{
        if(n==2){
            cout<<-1<<endl;
        }
        else{
            int x=1;
            for (int i = 0; i < 63; i++)
            {
                x=1LL<<i;
                if(x>l){
                    break;
                }
            }
            if(x<=r&&x>l){
                if(k+2>n){
                    cout<<x<<endl;
                }
                else{
                    cout<<l<<endl;
                }
            }
            else{
                cout<<-1<<endl;
            }
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
