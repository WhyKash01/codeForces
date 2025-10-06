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
int M = 1000000007;

void solve()
{
    int n;cin>>n;
    int a[n];
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]=i;
    }
    sort(a,a+n);
    int l,r;
    int x=n/2;
    if(n%2==1){
        l=m[n/2+1],r=m[n/2+1];
    }
    else if(m[n/2]<m[n/2+1]){
        l=m[n/2],r=m[n/2+1];
        x--;
    }
    else{
        cout<<n/2<<endl;
        return;
    }
    int y=n-x+1;
    while(x>=0){
        if(x==0){
            cout<<0<<endl;
            break;
        }
        if(m[x]<m[y]){
            if(m[x]<l&&m[y]>r){
                l=m[x],r=m[y];
                x--;
                y++;
            }
            else{
                cout<<x<<endl;
                break;
            }
        }
        else{
            cout<<x<<endl;
            break;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
