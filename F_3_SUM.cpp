#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;
    map<ll,ll>m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int x=s[s.size()-1]-'0';
        m[x]++;
        if(m[x]<=3){
            v.push_back(x);
        }
    }
    set<ll>s;
    for (int i = 0; i < v.size()-2; i++)
    {
        for (int j = i+1; j < v.size()-1; j++)
        {
            for (int k = j+1; k < v.size(); k++)
            {
                s.insert(v[i]+v[j]+v[k]);
            }
        }
    }
    if(s.find(3)!=s.end()||s.find(13)!=s.end()||s.find(23)!=s.end()){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }


    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}