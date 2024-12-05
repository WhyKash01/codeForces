#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int astart = 0, aend = n - 1, bstart = 0, bend = n - 1, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                count++;
            }
        }
        if (count == n)
        {
            cout << "Bob" << endl;
        }
        else
        {
            count=0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == b[n - 1 - i])
                {
                    count++;
                }
            }
            if (count == n)
            {
                cout << "Bob" << endl;
            }
            else{
            cout << "Alice" << endl;
            }
        }
    }
    return 0;
}