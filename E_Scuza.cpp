#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

ll M = 1000000007;

bool comp(int a, int b)
{
    return a > b;
}

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
        int n,k;
        cin>>n>>k;
        ll a[n],b[k],c[n];
        ll sum=0,Max=0;
        for (int i = 0; i < n; i++){
            ll x;
            cin>>x;
            Max=max(x,Max);
            c[i]=Max;
            sum=sum+x;
            a[i]=sum;
        }
        for(int i=0;i<k;i++)
            cin>>b[i];
        for (int i = 0; i < k; i++)
        {
            if((upper_bound(c,c+n,b[i])-c-1)==-1&&b[i]!=c[0]){
                cout<<"0 ";
            }
            else{
            ll ans=a[(upper_bound(c,c+n,b[i])-c-1)];
            cout<<ans<<" ";
            }
        }
        cout<<endl;
        
    }
}
