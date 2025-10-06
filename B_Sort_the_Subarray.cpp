#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
ll binaryExpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll res = binaryExpo(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
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
        cin >> n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int x=0,y=n-1;
        while(a[x]==b[x]){
            x++;
        }
        while(a[y]==b[y]){
            y--;
        }
        for (int i = x; i > 0; i--)
        {
            if(b[x]>=b[x-1]){
                x--;
            }
            else{
                break;
            }
        }
        for (int i = y; i < n-1; i++)
        {
            if(b[y]<=b[y+1]){
                y++;
            }
            else{
                break;
            }
        }
        cout<<x+1<<" "<<y+1<<endl;
    }
}
