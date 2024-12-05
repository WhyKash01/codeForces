#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        ll n,k,q;
        cin >> n>>k>>q;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> a;
        bool x=true;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(x&&arr[i]<=q){
                a.push_back(1);
                x=false;
            }
            else if(arr[i]<=q){
                a[count]++;
            }
            else if(!x&&arr[i]>q){
                x=true;
                count++;
            }
        }
        ll ans=0;
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i]>=k){
            ll y=a[i]-k+1;
            ans=ans+(y*(y+1)/2);
            }
            
        }
        cout<<ans<<endl;
        t--;
    }
}