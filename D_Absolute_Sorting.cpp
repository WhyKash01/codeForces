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
    int x=0,y=LLONG_MAX;
    bool f=true;
    bool ans=true;
    int w=-1;
    for (int i = n-1; i > 0; i--)
    {
        if(!f){
            if(a[i]>a[i-1]){
                y=min(y,(a[i]+a[i-1])/2);
            }
            else if(a[i]<a[i-1]){
                x=max(x,(a[i]+a[i-1]+1)/2);
            }
            if(x>y){
                ans=false;
                break;
            }
        }
        else if(a[i]<a[i-1]){
            f=false;
            
            if(w!=-1){
                y=(a[i]+w)/2;
            }
            x=(a[i-1]+a[i]+1)/2;
            if(x>y){
                ans=false;
                break;
            }
            
        }
        else{
            if(a[i]>a[i-1]){
               w=a[i]; 
            }
        }
    }
    if(ans){
        cout<<x<<endl;
    }
    else{
        cout<<-1<<endl;
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
