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
        ll n,k;
        cin >> n>>k;
        vector<pair<ll,ll>> pair;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            pair.push_back({a[i],b[i]});
        }
        sort(pair.begin(), pair.end(), sortbysec);
        if(pair[0].second>=k){
            cout<<k*n<<endl;
        }
        else{
            int i=0;
            ll count=0,cost=0,free=0;
            while(pair[i].second<k){
                if(free==0){
                cost+=k;
                count++;
                }
                else{
                    free--;
                }
                
                if(pair[i].first<n-count){
                    count+=pair[i].first;
                    cost+=pair[i].second*pair[i].first;
                    free+=pair[i].first;
                }
                else{
                    cost+=pair[i].second*(n-count);
                    count=n;
                    
                    break;
                }
                i++;
            }
            if(count==n){
                cout<<cost<<endl;
            }
            else{
                cost+=(n-count)*k;
                cout<<cost<<endl;
            }
        }
    }
    return 0;
}