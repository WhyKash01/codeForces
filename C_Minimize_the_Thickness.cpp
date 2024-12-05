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
        int n;
        cin>>n;
        ll sum=0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            sum+=x;
            a[i]=sum;
        }
        set<int> v;
        for (int i = 0; i < n; i++)
        {
            if(a[n-1]%a[i]==0){
                int count=2,m=i+1, last=i;
                bool x=true;
                for (int j = i+1; j < n; j++)
                {
                    if(a[j]%a[i]==0&&a[j]/a[i]==count){
                        m=max(m,j-last);
                        last=j;
                        count++;
                    }
                    else if(a[j]>a[i]*count){
                        x=false;
                        break;
                    }
                }
                if(x){
                    v.insert(m);
                }
            }
        }
        cout<<*v.begin()<<endl;
    }
}