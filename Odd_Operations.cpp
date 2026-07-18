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
    if(n%2==1){
        cout<<0<<endl;
    }
    else if(n<10){
        cout<<-1<<endl;
    }
    else{
        int Max=0;
        int f=-1;
        bool e=false;
        while(n>0){
            int x=n%10;
            n/=10;
            if(f==-1){
                f=x;
            }
            Max=max(Max,x);
            if(x%2==1){
                e=true;
                break;
            }
        }
        if(e){
            cout<<1<<endl;
        }
        else if(Max==f){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
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
