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
        int start=n-1,end=0;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]==a[i+1]){
                start=i+1;
                break;
            }
        }
        for (int i = n-1; i > 0; i--)
        {
            if(a[i]==a[i-1]){
                end=i-1;
                break;
            }
        }
        if(end-start<0){
            cout<<0<<endl;
        }
        else{
            if(start==end){
                cout<<1<<endl;
            }
            else{
                cout<<end-start<<endl;
            }
        }
    }
}