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
    int n;cin>>n;
    int l=1,r=n;
    int c=0;
    while(l<r){
        c++;
        int mid=(l+r)/2;
        cout<<"? "<<l<<" "<<mid<<endl;
        cout.flush();   
        int ls=mid-l+1;
        set<int>s;
        for (int i = 0; i < ls; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int cnt=0;
        for (int i = l; i <= mid; i++)
        {
            if(s.count(i)==0){
                cnt++;
            }
        }
        if((ls-cnt)%2==1){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<"! "<<l<<endl;
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
