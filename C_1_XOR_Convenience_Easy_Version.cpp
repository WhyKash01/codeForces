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
    int a[n+1];
    a[n]=1;
    
    for (int i = 1; i < n+1; i++)
    {
        int x=i^1;
        if(x>=n){
            a[1]=i;
        }
        else{
            a[x]=i;
        }
    }
    bool f=false;
    for (int i = 2; i <= n-1; i++)
    {
        if((i^n)>i&&(i^n)<n){
            swap(a[1],a[i]);
            f=true;
            break;
        }
    }
    if(!f){
        if(n%2==1){
            swap(a[n],a[n-1]);
        }
        else{
            cout<<-1<<endl;
            return;
        } 
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i+1]<<" ";
    }
    cout<<endl;
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
