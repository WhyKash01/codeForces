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
    int n,m;
    cin>>n>>m;
    int x=n-m;
    set<int>s1;
    int k=2*m-2;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if(x%i==0){
            int a=i,b=x/i;
            if(i>=k&&(i%2==0)){
                s1.insert(i);
            }
            if(b%2==0&&b>=k){
                s1.insert(b);
            }
        }
    }
    if(m>1){
        int x=n+m-2;
        int k=2*(m+1)-2;
        for (int i = 1; i <= sqrt(x); i++)
        {
           if(x%i==0){
            int a=i,b=x/i;
            if(i>=k&&(i%2==0)){
                s1.insert(i);
            }
            if(b%2==0&&b>=k){
                s1.insert(b);
            }
        } 
        }
        
    }
    cout<<s1.size()<<endl;

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
