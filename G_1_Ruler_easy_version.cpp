#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
#define int64_t long long
#define pii pair<int64_t, int64_t>
#define fr first
#define sc second
#define vi vector<int64_t>
#define vvi vector<vector<int64_t>>
#define vpii vector<pair<int64_t, int64_t>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int64_t i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()

void solve() 
{
    int x=2,y=999;
    while(y-x>0){
        int mid=(x+y)/2;
        cout<<"? "<<mid<<" "<<mid<<endl;
        cout << flush;
        int z;
        cin>>z;
        if(z==mid*mid){
            x=mid+1;
        }
        else{
            y=mid;
        }
    }
    cout<<"! "<<x<<endl;
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
