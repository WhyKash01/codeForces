#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        int last;
        int first = min(a[0], b[0]);
        int mid1 = max(a[0], b[0]);
        int mid2 = min(a[1], b[1]);
        last = max(a[1], b[1]);
        int l = last - first + 1;
        bool x = false;
        int count = 0;
        if (mid1 > mid2)
        {
            cout << count + 1 << endl;
        }
        else
        {

            for (int i = first; i <= last; i++)
            {
                if (i == mid1 && i == first)
                {

                    x = true;
                }
                else if (i == mid1 && mid1 == mid2)
                {
                    count = 2;
                    break;
                }
                else if (i == mid1)
                {
                    count++;
                    x = true;
                }
                else if (i == mid2 && i == last)
                {
                    count++;
                }
                else if (i == mid2)
                {
                    count += 2;
                    x = false;
                }
                else if (x)
                {
                    count++;
                }
            }
            if (count == 0 && (a[1] + 1 == b[0] || b[1] + 1 == a[0]))
            {
                cout << count + 1 << endl;
            }
            else
            {
                cout << count << endl;
            }
        }
    }
    return 0;
}