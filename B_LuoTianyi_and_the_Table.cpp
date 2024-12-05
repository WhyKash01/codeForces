#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, m;
        cin >> n >> m;
        int l = n * m;
        int a[l];
        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        int Max = a[0], Min = a[0], Max2 = a[0], Min2 = a[0], sum = 0;
        sort(a,a+l);
        
        if(l>2){
            Min=a[0];
        Max=a[l-1];
        Min2=a[1];
        Max2=a[l-2];
        }
        else{
            Min=a[0];
        Max=a[l-1];
        Min2=a[0];
        Max2=a[l-1];
        }
        if (abs(Max-Min2) <  abs(Min-Max2))
        {
            if (n < m)
            {
                swap(n, m);
            }
            int x = (m - 1) * (Max2 - Min);
            int y = (n - 1) * m * (Max - Min);
            
            cout << x + y << endl;
        }
        else
        {
            if (n < m)
            {
                swap(n, m);
            }
            int x = (m - 1) * (  Max-Min2);
            int y = (n - 1) * m * (  Max-Min);
            cout << x + y << endl;
        }

        t--;
    }
}