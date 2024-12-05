#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll ans=0;
        int curr=1;
        int b[n]={0};
        for (int i = 0; i < n; i++)
        {
            if(a[i]>=curr&&b[curr]==0){
                ans+=(a[i]-curr)*1LL;
                b[curr]++;
                curr++;
            }
        }
        cout<<ans<<endl;
    }
}
