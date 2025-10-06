#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
ll M = 1000000007;

bool comp(int a, int b)
{
    return a > b;
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
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int i=0,j=n-1;
        bool ans=false;
        int Max=n,Min=1;
        while(j-i>0){
            if(a[i]!=Min&&a[i]!=Max&&a[j]!=Min&&a[j]!=Max){
                ans=true;
                break;
            }
            if(a[i]==Min){
                Min++;
                i++;
            }
            if(a[i]==Max){
                Max--;
                i++;
            }
            if(a[j]==Min){
                Min++;
                j--;
            }
            if(a[j]==Max){
                Max--;
                j--;
            }
        }
        (ans)?cout<<i+1<<" "<<j+1<<endl:cout<<-1<<endl;
    }
}