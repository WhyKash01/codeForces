#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if(x>y){
            swap(x,y);
        }
        if(k>=x&&k>=y){
            cout<<x*y<<endl;
        }
        else if(x<=k&&y>=k){
            cout<<x*k<<endl;
        }
        else{
            cout<<k*k<<endl;
        }
        t--;
    }
}