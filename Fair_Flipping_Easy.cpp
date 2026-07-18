#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int,pair<int,int>>
#define ppi pair<pair<int,int>,int>
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c0 = 0, c1 = 0;
    for (char c : s) {
        if (c == '0'){
            c0++;
        }
        else{
            c1++;
        }
    }
    if (c0 < k || c1 < k) {
        cout<<s<<endl;
    }
    else if (n==k*2){
        string s1=s;
        for (int i = 0; i < n; i++){
            if(s[i]=='0'){
                s1[i]='1';
            }
            else{
                s1[i]='0';
            }
        }
        cout<<min(s,s1) <<endl;
    }
    else {
        string ans;
        for (int i = 0; i < c0; i++)
        {
            ans.push_back('0');
        }
        for (int i = 0; i < c1; i++)
        {
            ans.push_back('1');
        }
        cout<<ans<<endl;
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