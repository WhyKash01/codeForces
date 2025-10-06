#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,l,r;
    cin>>n>>l>>r;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<ll>left,right;
    for (int i = 0; i < r; i++)
    {
        left.push_back(a[i]);
    }
    for (int i = n-1; i >= l-1; i--)
    {
        right.push_back(a[i]);
    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    ll sum1=0,sum2=0;
    for (int i = 0; i < r-l+1; i++)
    {
        sum1+=left[i];
        sum2+=right[i];
    }
    cout<<min(sum1,sum2)<<endl;
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