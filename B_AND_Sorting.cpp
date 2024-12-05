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
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        vector<int> w;
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=b[i]){
                w.push_back(a[i]);
            }
        }
        int ans=(1<<30)-1;
        for (int i = 0; i < w.size(); i++)
        {
            ans&=w[i];
        }
        
        cout<<ans<<endl;
    }
}