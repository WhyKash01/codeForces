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
        int n;
        cin>>n;
        unordered_map<int,int> m;
        for (int i = 1; i <= n; i++)
        {
            m[i]=0;
        }
        vector<int> v;
        v.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            if(m[i]==1){
                continue;
            }
            int x=i;
            while(x<=n){
                v.push_back(x);
                m[x]=1;
                x=x*2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}