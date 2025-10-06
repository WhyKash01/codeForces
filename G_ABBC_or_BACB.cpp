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
    string s;
    cin>>s;
    int x=0,y=0,z=0;
    vector<int>v;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='A'){
            x++;
            z++;
        }
        else{
            if(x!=0){
                v.push_back(x);
            }
            x=0;
            y++;
        }
    }
    if(s[s.size()-1]!='B'){
        v.push_back(x);
    }
    if(y>=v.size()){
        cout<<z<<endl;
    }
    else{
        if(v.size()==0){
            cout<<0<<endl;
            return;
        }
        sort(v.begin(),v.end());
        cout<<z-v[0]<<endl;
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