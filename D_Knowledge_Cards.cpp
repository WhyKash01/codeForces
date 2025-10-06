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
    int n,m,k;
    cin>>n>>m>>k;
    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin>>a[i];
    }
    int x=n*m-4;
    set<int>s;
    int req=k;
    bool f=true;
    for (int i = 0; i < k; i++)
    {
        if(a[i]==req){
            req--;
            while(s.find(req)!=s.end()){
                s.erase(req);
                req--;
            }
        }
        else if(s.size()<x){
            s.insert(a[i]);
        }
        else{
            f=false;
            break;
        }
    }
    f?cout<<"YA\n":cout<<"TIDAK\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
