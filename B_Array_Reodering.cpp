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
        ll n;
        cin>>n;
        ll a[n];
        ll count=0;
        vector<int> odd;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2!=0){
                odd.push_back(a[i]);
            }
            else{
                count++;
            }
        }
        ll sum=(count*(2*(n-1)-(count-1)))/2;
        
        for (int i = 0; i < odd.size(); i++) {
            for (int j = i + 1; j < odd.size(); j++) {
                if (__gcd(odd[i], odd[j]) > 1) {
                    sum++;
                }
            }
        }
        
        cout<<sum<<endl;
    }
}