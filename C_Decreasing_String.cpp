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
    string s;
    int n;
    cin>>s>>n;
    int l=s.size();
    int z=0;
    vector<int>a(26,0),b(26,0);
    for (int i = 0; i < l; i++)
    {
        a[s[i]-'a']++;
    }
    
    while(l<n){
        n-=l;
        l--;
        z++;
    }
    string t;
    int len=s.size();
    for (int i = 0; i < len; i++)
    {
        if(z){
            if(t.size()==0){
                t.push_back(s[i]);
            }
            else if(t[t.size()-1]<=s[i]){
                t.push_back(s[i]);
            }
            else{
                while(z){
                    if(t[t.size()-1]>s[i]){
                        t.pop_back();
                        z--;
                    }
                    else{
                        break;
                    }
                }
                t.push_back(s[i]);
            }
        }
        else{
            t.push_back(s[i]);
        }
    }
    cout<<t[n-1];
    
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