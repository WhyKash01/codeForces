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
int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int>b(5005,0);
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==j){
            j++;
            b[a[i]]++;
        }
        else if(a[i]<j){
            b[a[i]]++;
        }
        else{
            break;
        }
    }
    int c[j];
    c[0]=0;
    for (int i = j-1; i >= 0; i--)
    {
        int x=i+((b[i]-1)*j);
        // cout<<i<<" "<<b[i]<<" "<<x<<endl;
        for (int k = i+1; k < j; k++)
        {
            int y=i+(b[i]-1)*k+c[k];
            x=min(x,y);
        }
        c[i]=x;
    }
    cout<<c[0]<<endl;
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