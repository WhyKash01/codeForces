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
ll calc(vector<int>& a) {
    ll zeroes = 0, ans = 0;
    for(int i = a.size() - 1; i >= 0; --i) {
        if(a[i] == 0) ++zeroes;
        else ans += zeroes;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        vector<int> v(2*abs(x-y));
        bool z=false;
        int curr=x;
        v[0]=x;
        for (int i = 1; i < 2*abs(x-y); i++)
        {
            if(curr==y){
                z=true;
            }
            if(z){
                v[i]=++curr;
            }
            else{
                v[i]=--curr;
            }
        }
        cout<<2*abs(x-y)<<endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}