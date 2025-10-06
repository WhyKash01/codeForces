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
int M = 998244353;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    set<int>s;
    map<int,int>m;
    bool f=false;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
        m[a[i]]++;
        if(m[a[i]]>3){
            f=true;
            break;
        }
    }
    if(f){
        cout<<"Yes\n";
    }
    else{
        bool e=false;
        int z=-1;
        for(auto x:s){
            if(!e&&m[x]>1){
                z=x;
                e=true;
            }
            else{
                if(x-1==z){
                    if(m[x]>1){
                        f=true;
                        break;
                    }
                    z=x;
                }
                else{
                    if(m[x]>1){
                        z=x;
                    }
                    else{
                        z=-1;
                        e=false;
                    }
                }
            }
        }
        if(f){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
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
