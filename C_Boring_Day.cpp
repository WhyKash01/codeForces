

#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int Floor(int x, int y)
{
    return floor(static_cast<double>(x) / y);
}
const ll M = 1000000007;

bool comp(pair<int, ll> a, pair<int, ll> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
	    ll a[n+1];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        a[n]=0;
        ll i=0,ans=0,sum=0;
        ll last=i;
        while(i<n){
            while(last < n && sum < l) {
			    sum += a[last];
			    last += 1;
            }
		    if (l <= sum && sum <= r){
            	ans += 1;
			    i = last;
			    sum = 0;
            }
		    else{
			    sum -= a[i];
			    i += 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
