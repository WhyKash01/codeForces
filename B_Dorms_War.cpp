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
        int n,k;
        string s;
        cin>>n>>s>>k;
        unordered_set<char> a;
        for (int i = 0; i < k; i++)
        {
            char x;
            cin>>x;
            a.insert(x);
        }
        int count=0,Max=0;
        for (int i = 0; i < n; i++)
        {
            if(a.find(s[i])!=a.end()){
                Max=max(Max,count);
                count=1;
            }
            else{
                count++;
            }
        }
        cout<<Max<<endl;
    }
}