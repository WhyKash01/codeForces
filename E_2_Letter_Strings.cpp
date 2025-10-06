#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    string s[n];
    map<char,ll>a,b;
    map<string,ll>c;
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        c[s[i]]++;
        a[s[i][0]]++;
        b[s[i][1]]++;
    }
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[s[i][0]]-1;
        a[s[i][0]]--;
        sum+=b[s[i][1]]-1;
        b[s[i][1]]--;
        sum-=2*(max(c[s[i]]-1,0ll));
        c[s[i]]--;
    }
    cout<<sum<<endl;
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