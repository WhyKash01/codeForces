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
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a==b){
        cout<<0<<endl;
    }
    else if(a>b){
        if(a-1==b&&a%2==1){
            cout<<y<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        if(x<=y){
            cout<<(b-a)*x<<endl;
        }
        else{
            if(a%2==0){
                if((b-a)%2==0){
                    cout<<(b-a)/2*x+(b-a)/2*y<<endl;
                }
                else{
                    cout<<(b-a)/2*x+((b-a)/2+1)*y<<endl;
                }
            }
            else{
                if((b-a)%2==0){
                    cout<<(b-a)/2*x+(b-a)/2*y<<endl;
                }
                else{
                    cout<<(b-a)/2*y+((b-a)/2+1)*x<<endl;
                }
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
