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
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x=0,l=0,r=n-1;
    sort(a,a+n);
    int cnt=0;
    while(l<=r){
        if(l==r){   
            int z=(a[l]-x+1)/2;
            if(a[l]-z>0){
                z++;
            }
            cnt+=z;
            break;
        }
        if(x+a[l]==a[r]){
            cnt+=a[l]+1;
            x=0;
            l++;
            r--;
        }
        else if(x+a[l]>a[r]){
            a[l]-=a[r]-x;
            cnt+=a[r]-x+1;
            r--;
            x=0;
        }
        else{
            x+=a[l];
            cnt+=a[l];
            l++;
        }
    }
    cout<<cnt<<endl;
    
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
