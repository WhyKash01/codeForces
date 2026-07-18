#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));

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
    int n,m,x;
    cin>>n>>m>>x;
    char a='0',b='1';
    if(n<m){
        swap(a,b);
        swap(n,m);
    }
    if(abs(n-m)<=x&&n>=x){
        for(int i=0;i<x;i++){
            cout<<a;
            n--;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<b<<a;
            m--;
        }
        for (int i = 0; i < m; i++)
        {
            cout<<b;
        }
        
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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
