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
        map<ll,ll> m;
        m[1]=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        ll sum=0;

        for (auto i = m.begin(); i != m.end(); i++)
        {
            sum+=((*i).first-1)*(*i).second%M;
        }
        if(n==1){
            cout<<"NO"<<endl;
        }
        else if(m[1]>sum)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}