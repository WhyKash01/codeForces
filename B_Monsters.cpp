#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin>>a;
            arr[i]=a%k;
        }
        unordered_map<ll,vector<ll>>m;
        set<ll, greater<int>> x;
        for (ll i = 0; i < n; i++)
        {
            if(arr[i]!=0){
            x.insert(arr[i]);
            }
            m[arr[i]].push_back(i);
        }
        for (ll i = 0; i < m[0].size(); i++)
        {
            cout<<m[0][i]+1<<" ";
        }
        
        set<ll>::iterator i;
        for (i=x.begin();i !=x.end();i++)
        {
            
            for (ll j = 0; j < m[*i].size(); j++)
            {
                
                cout<<m[*i][j]+1<<" ";
            }
        }
        
        
        cout<<endl;
    }
    return 0;
}