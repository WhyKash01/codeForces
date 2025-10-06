
#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int Floor(int x, int y)
{
    return floor(static_cast<double>(x) / y);
}
const ll M = 1000000007;



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll b[n];
        for (int i = 0; i < n; i++)
        {
            b[i]=i;
        }
        auto comp =[&](int c,int b){
            if(c<b){
                return a[c][b]=='1'; 
            }
            return a[c][b]=='0';
        };
        sort(b,b+n,comp);
        for (int i = 0; i < n; i++)
        {
            cout<<b[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}