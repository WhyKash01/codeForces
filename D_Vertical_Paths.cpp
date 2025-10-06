#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;


void solve()
{
    int n;
    cin >> n;
    ll a[n];
    set<ll>s;
    for (int i = 0; i < n; i++)
    {
        s.insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        s.erase(a[i]-1);
    }
    ll b[n]={0};
    vector<vector<int>>v;
    for(auto i:s){
        vector<int>v1;
        v1.push_back(i+1);
        ll curr=i;
        while(b[a[curr]-1]==0){
            b[a[curr]-1]++;
            v1.push_back(a[curr]);
            curr=a[curr]-1;
        }
        v.push_back(v1);
    }
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        cout<<1<<endl;
        cout<<endl;
    }
    else{cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].size()<<endl;
        for (int k = v[i].size()-1; k >= 0; k--)
        {
            cout<<v[i][k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;}
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