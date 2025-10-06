#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
bool comp(int a, int b) {
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll count=0;
        ll ans=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]-count>0&&k>0&&((a[i]-count)*(n-i))<=k){
                ans+=((a[i]-count)*(n-i));
                k=k-((a[i]-count)*(n-i));
                count+=(a[i]-count);
            }
            else if(a[i]-count>0&&k>0&&(a[i]-count)*(n-i)>k){
                count+=k;
                ans+=k;
                k=0;
            }
            else if(k==0){
                break;
            }
            if(a[i]-count==0&&k>0){
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }
}