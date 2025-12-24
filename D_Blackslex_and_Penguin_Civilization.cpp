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

void solve() 
{
    int n;
    cin>>n;
    int x=powl(2,n);
    set<int>s;
    for (int i = 0; i < x; i++)
    {
        s.insert(i);
    }
    int Max=x-1;
    while(n>=0){
        int z=powl(2,n)-1;
        int k=powl(2,n+1);
        int i=1;
        cout<<z<<" ";
        while(z+k*i<Max){
            cout<<z+k*i<<" ";
            i++;
        }
        n--;
    }
    cout<<endl;
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
