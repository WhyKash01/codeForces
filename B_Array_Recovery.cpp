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
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int b[n];
        b[0]=a[0];
        bool ans=true;
        for (int i = 1; i < n; i++)
        {
            if(a[i]==0){
                b[i]=b[i-1];
            }
            else if(a[i]<=b[i-1]){
                ans=false;
                break;
            }
            else{
                b[i]=b[i-1]+a[i];
            }
        }
        if(ans){
            for (int i = 0; i < n; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}