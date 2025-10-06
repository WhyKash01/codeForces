#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vectortor<int>
#define vvi vectortor<vectortor<int>>
#define vpii vectortor<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int M = 1e9 + 7;

void solve()
{
    int n,k;cin>>n>>k;
    int cnt1=0,cnt2=0;
    int x=n;
    while(x%2==0){
        cnt1++;
        x/=2;
    }
    while(x%5==0){
        cnt2++;
        x/=5;
    }
    if(cnt1==cnt2){
        int x=1;
        while(x*10<=k){
            x*=10;
        }
        int y=k/x;
        cout<<y*x*n<<endl;
    }
    else if(cnt1>cnt2){
        int req=cnt1-cnt2;
        int z=1,x=0;
        while(z*5<=k){
            x++;
            z*=5;
            if(x>=req){
                break;
            }
        }
        while(z*10<=k){
            z*=10;
        }
        int y=k/z;
        cout<<y*z*n<<endl;
    }
    else{
        int req=cnt2-cnt1;
        int z=1,x=0;
        while(z*2<=k){
            x++;
            z*=2;
            if(x>=req){
                break;
            }
        }
        while(z*10<=k){
            z*=10;
        }
        int y=k/z;
        cout<<y*z*n<<endl;
    }
    return;
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
