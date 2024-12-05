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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        cout<<1<<" ";
        if(n/2>=y){
            cout<<m<<" "<<n<<" "<<1<<endl;           
        }
        else{
            cout<<1<<" "<<n<<" "<<m<<endl;
        }
    }
}