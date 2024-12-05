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
        int n; cin >> n;
        ll ans=1;
        if(n%2==0){
            ans=n/2;
        }
        else{
        for (int i = 2; i <= 100000; i++)
        {
            if(n % i == 0){
                ans=n/i;
                break;
            }
        }
        }
        cout<<ans<<" "<<n-ans<<endl;
    }
}
