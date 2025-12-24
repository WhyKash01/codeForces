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
int len(int i, string k, string t)
{
    if (t.size() - i < k.size())
    {
        return -1;
    }
    int x = 0;
    bool f = true;
    for (int j = i; j < k.size()+i; j++)
    {
        if (k[x] != t[j])
        {
            f = false;
            break;
        }
        x++;
    }
    if (f)
    {
        int ans = i + k.size();
        return ans;
    }
    else
    {
        return -1;
    }
}
void solve()
{
    string t;
    cin >> t;
    int n;
    cin >> n;
    string s[n];
    map<char, vector<pair<string,int>>> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        m[s[i][0]].push_back({s[i],i});
    }
    int l = 0, r = 0;
    vector<pair<int,int>>ans;
    while (r < t.size())
    {
        int Max = r - 1;
        pair<int,int>p={-1,-1};
        for (int i = r; i >= l; i--)
        {
            for (auto k : m[t[i]])
            {
                int x = len(i, k.first, t);
                if(x>Max){
                    p={k.second+1,i+1};
                }
                Max=max(Max,x);
            }
        }
        if(Max==r-1){
            break;
        }
        else{
            ans.push_back(p);
            l=r+1;
            r=Max;
        }
    }
    if(r==t.size()){
        cout<<ans.size()<<endl;
        for (auto x:ans)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
    else{
        cout<<-1<<endl;
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
