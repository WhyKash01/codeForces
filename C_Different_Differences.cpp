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
        int n,k;
        cin>>k>>n;
        int a[k];
        int x=2;
        int count=0;
        a[0]=1;
        for (int i = 1; i < k; i++)
        {
            if(count<n-k){
                a[i]=a[i-1]+x;
                count+=x;
                x++;
            }
            else{
                a[i]=a[i-1]+1;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
