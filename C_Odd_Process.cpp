#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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

void solve() 
{
    int n;
    cin>>n;
    int a[n];
    int x=0,cnt=0;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]%2==1){
            x=max(x,a[i]);
            cnt++;
        }
        else{
            v.push_back(a[i]);
        }
    }
    sort(v.begin(),v.end());
    if(cnt==0){
        for (int i = 0; i < n; i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
    }
    else{
        int b[n+1];
        b[0]=0;
        b[1]=x;
        int l=v.size();
        int j=2;
        for (int i =l-1 ; i >= 0; i--)
        {
            b[j]=b[j-1]+v[i];
            j++;
        }
        for (int i = j; i <= n; i++)
        {
            b[i]=b[i-2];
        }
        if(cnt%2==0){
            b[n]=0;
        }
        for (int i = 1; i <= n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
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
