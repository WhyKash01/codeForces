#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll Max=0;
    for (int i = 0; i < n; i++)
    {
        ll sum=0;
        for (int j = 0; j < n-i; j++)
        {
            sum+=a[j];
            if(j!=n-i-1){
                a[j]=a[j+1]-a[j];
            }
        }
        if(sum<0&&i!=0){
            sum=-sum;
        }
        Max=max(Max,sum);
    }
    if(n==1){
        cout<<a[0]<<endl;
    }
    else{
    cout<<Max<<endl;
    }
    
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