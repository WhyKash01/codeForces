#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
bool sortbysec(const pair<int,int> &a,
            const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<vector<ll>> v;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin>>m;
            vector<ll> temp;
            for (int j = 0; j < m; j++)
            {
                int x;
                cin>>x;
                temp.push_back(x);
            }
            v.push_back(temp);
        }
        int index;
        ll Min=10e9,minvalue=10e9;
        for (int i = 0; i < n; i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        for (int i = 0; i < n; i++)
        {
            minvalue=min(minvalue,v[i][0]);
            if(v[i][1]<Min){
                index=i;
                Min=v[i][1];
            }
        }
        ll sum =0;
        for (int i = 0; i < n; i++)
        {
            if(index==i){
                continue;
            }
            else{
                sum+=v[i][1];
            }
        }
        sum+=minvalue;
        cout<<sum<<endl;
        
    }
    return 0;
}