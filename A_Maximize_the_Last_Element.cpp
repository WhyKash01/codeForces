#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int Max=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(i%2==0)
                Max=max(Max,a[i]);
        }
        cout<<Max<<endl;
            
    }
}