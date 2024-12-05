#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            m[x]=i;
        }
        vector<pair<int,int>> a(m.begin(),m.end());
        
        int ans=-1;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if(__gcd(a[i].first,a[j].first)==1){
                    ans=max(ans,a[i].second+2+a[j].second);
                }
            }
            
        }
        cout<<ans<<endl;
    }
}