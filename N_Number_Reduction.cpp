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
    string s;int n;
    cin>>s>>n;
    map<int,set<int>>m;
    int l=s.size()-1;
    int x=0,y=n;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        int c=s[i]-'0';
        m[c].insert(i);
        if(i==y){
            int z;
            for (int j = 0; j <= 9; j++)
            {
                if(j==0&&x==0){
                    continue;
                }
                if(m[j].size()){
                    z=*m[j].begin();
                    ans.push_back(s[z]);
                    for (int k = x; k <= z; k++)
                    {
                        m[s[k]-'0'].erase(k);
                    }
                    break;
                }
            }
            x=z+1;
            y++;
        }
    }
    cout<<ans<<endl;
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
