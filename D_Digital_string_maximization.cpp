#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=s[i]-'0';
    }
    for (int i = 0; i < n; i++)
    {
        ll Max=a[i],it=i,curr=1;
        ll l=min(i+9LL,n);
        for (int j = i+1; j < l; j++)
        {
            if(a[j]-curr>Max){
                Max=a[j]-curr;
                it=j;
            }
            curr++;
        }
        a[it]=Max;
        for(int j=it;j>i;j--){
            swap(a[j],a[j-1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    
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