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
    string s;
    cin>>s;
    int x=0,y=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==')'){
            x++;
        }
        else{
            y++;
        }
    }
    int a[n];
    if(x!=y){
        cout<<-1<<endl;
        return;
    }
    else{
        int x=0,y=0;
        bool f=true;
        for (int i = 0; i < n; i++)
        {
            if(s[i]==')'){
                y++;
            }
            else{
                x++;
            }
            if(y>x){
                a[i]=1;
                f=false;
            }
            else if(y==x){
                if(f){
                    a[i]=2;
                }
                else{
                    a[i]=1;
                }
            }
            else{
                a[i]=2;
                f=true;
            }
        }
    }
    bool l=false;
    int q=a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=q){
            l=true;
        }
    }
    if(l){
        cout<<2<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<1<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
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
