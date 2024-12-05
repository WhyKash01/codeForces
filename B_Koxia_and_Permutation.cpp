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
        cin>>n>>k;
        int a[n];
        int end=n, start=1;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                a[i]=end;
                end--;
            }
            else{
                a[i]=start;
                start++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
