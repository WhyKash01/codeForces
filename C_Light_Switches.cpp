#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int,int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define pb push_back
#define ppb pop_back
#define inp(v) for(auto& x : v) cin >> x;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(v) (v).begin(),(v).end()
int M=1e9+7;

void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int l=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        l=max(l,a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int x=(l-a[i])%(2*k);
        int y=l-x;
        if(x>k){
            y+=2*k;
        }
        a[i]=y;
    }
    sort(a,a+n);
    if(a[n-1]-a[0]>=k){
        cout<<-1<<endl;
    }
    else{
        cout<<a[n-1]<<endl;
    }
    return;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


