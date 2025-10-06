#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
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
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<int> even;
        int Max=-1;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                even.push_back(a[i]);
            }
            else{
                Max=max(a[i],Max);
            }
        }
        sort(even.begin(),even.end());
        if(Max==-1||even.size()==0){
            cout<<0<<endl;
        }
        else{
            ll ans=0,sum=Max;
            for (int i = 0; i < even.size(); i++)
            {
                if(sum<even[i]){
                    ans=1;
                    break;
                }
                else{
                    sum+=even[i];
                }
            }
            cout<<even.size()+ans<<endl;
        }
    }
}