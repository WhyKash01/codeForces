#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
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
        int n,k;
        string s,c;
        cin>>n>>k>>s;
        set<int> v;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin>>x;
            v.insert(x);
        }
        cin>>c;
        sort(c.begin(),c.end());
        
        int j=0;
        for (auto i=v.begin();i!=v.end();i++)
        {
            s[*i-1]=c[j];
            j++;
        }
        cout<<s<<endl;
    }
}