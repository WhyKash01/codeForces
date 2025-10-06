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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n==1){
        cout<<a[0]<<endl;
        return;
    }
    int x=n;
    bool f=false,l=false;
    int p=0,q=-1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x&&i==0){
            x--;
            f=true;
        }
        else if(a[i]==x){
            q=i;
            if(n-1==i){
                l=true;
            }
        }
    }
    for (int i = q; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    if(!l){
        cout<<a[q-1]<<" ";
        if(q==1){
            cout<<endl;
        }
        q-=2;
    }
    else{
        q--;
    }
    while(q>=p){
        if(q==p){
            cout<<a[q]<<endl;
            break;
        }
        else if(f){
            for (int i = 0; i <= q; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            break;
        }
        else if(a[p]>a[q]){
            f=true;
        }
        else{
            cout<<a[q]<<" ";
            q--;
        }
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
