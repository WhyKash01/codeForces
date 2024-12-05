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
        int a[n];
        int Max =0,Min=n;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(i!=0&&a[i]>=a[i-1]){
                count++;
            }
            Min=min(Min,a[i]);
            Max=max(Max,a[i]);
        }
        if(count+1==n){
            cout<<0<<endl;
        }
        else if(Max==a[0]&&Min==a[n-1]){
            cout<<3<<endl;
        }
        else if(Max==a[n-1]||Min==a[0]){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}