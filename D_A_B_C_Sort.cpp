#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;cin>>n;
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    bool ans=true;
    bool odd =true;
    if(n%2!=0&&a[0]!=b[0]){
        ans=false;
    }
    if(ans){
        ll start=0;
        if(n%2!=0){
            start=1;
        }
        for (int i = start; i < n; i+=2)
        {
            
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
            if(b[i]>b[i+1]){
                swap(b[i],b[i+1]);
            }
            if(a[i]!=b[i]||a[i+1]!=b[i+1]){
                ans=false;
                break;
            }
        }
        
    }
    ans?cout<<"YES\n":cout<<"NO\n";
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}