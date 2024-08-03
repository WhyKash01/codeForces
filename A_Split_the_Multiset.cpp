#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int count = 0;
            int ans = 0;
            while (n>1)
            {
                n=n-(k-1);
                ans++;
            }
            cout<<ans<<endl;
        }

        t--;
    }
}