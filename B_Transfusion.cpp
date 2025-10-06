#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
ll binaryExpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll res = binaryExpo(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
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
        int n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll odd=0,even=0,cnt1=0,cnt2=0;
        for (int i = 0; i < n; i+=2)
        {
            odd+=a[i];
            cnt1++;
        }
        for (int i = 1; i < n; i+=2)
        {
            even+=a[i];
            cnt2++;
        }
        float z=1.0;
        float x=(z*odd)/cnt1,b=(z*even)/cnt2,c=(z*sum)/n;
        if(odd%cnt1!=0||even%cnt2!=0||odd/cnt1!=even/cnt2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
