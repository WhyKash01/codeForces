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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int i=n-1;
        while (i>0)
        {
            if(a[i]<a[i-1]){
                break;
            }
            i--;
        }
        if(i==0){
            cout<<0<<endl;
        }
        else{
            unordered_map<int,int> m;
            for (int j = 0; j < i; j++)
            {
                m[a[j]]=1;
            }
            for (int k = n-1; k > i ; k--)
            {
                if(m[a[k]]==1){
                    i=k;
                    break;
                }
            }
            set<int> s;
            for (int j = 0; j < i; j++)
            {
                s.insert(a[j]);
            }
            cout<<s.size()<<endl;
        }
    }
}