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
        vector<int> v(n);
        for (auto &i :v)
            cin>>i;
        vector<int> a(n+2,0);
        bool ans=true;
        for (int i = 0; i < n; i++)
        {
            if(i==0){
                a[v[i]]++;
            }
            else if(a[v[i]-1]!=0||a[v[i]+1]!=0){
                a[v[i]]++;
            }
            else{
                ans=false;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
}