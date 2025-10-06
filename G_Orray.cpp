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
    int n;
    cin>>n;int a[n];
    vector<int>v[30];
    multiset<int>s;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        for (int j = 0; j < 30; j++)
        {
            int z=1LL<<j;
            if(a[i]&z){
                v[j].pb(a[i]);
            }
        }
        s.insert(a[i]);
    }
    vector<int>ans;
    ans.push_back(*s.rbegin());
    s.erase(s.find(*s.rbegin()));
    int x=0;
    int pre=0;
    int k=0;
    while(k<30){
        if(!(ans[0]&(1LL<<k))){
            if((1LL<<k)>ans[0]){
                break;
            }
            pre=k;
            x+=1LL<<k;
        }
        k++;
    }
    for (int i = pre; i >= 0; i--)
    {
        if((1LL<<i)&x){
            
            int z=0;
            int num=-1;
            for (int j = 0; j < v[i].size(); j++)
            {
                if(s.find(v[i][j])!=s.end()){
                    if((x&v[i][j])>z){
                        num=v[i][j];
                        z=v[i][j]&x;
                    }
                }
            }
            if(num==-1){
                continue;
            }
            ans.push_back(num);
            s.erase(s.find(num));
            x-=x&num;
            if(x==0){
                break;
            }
        }
    }
    for (auto x:s)
    {
        ans.pb(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
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
