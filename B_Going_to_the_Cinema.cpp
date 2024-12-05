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
        vector<int> v;
        int ans=0;
        for (int i = 0; i < n-1; i++)
        {
            if(v.size()>=a[i]&&a[i+1]>v.size()+1&&a[i+1]!=a[i]){
                ans++;
            }
                v.push_back(a[i]);
        }
        if(a[0]!=0){
            ans++;
        }
        
        cout<<ans+1<<endl;
        
    }
}
