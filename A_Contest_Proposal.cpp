#include <bits/stdc++.h>
using namespace std;
int solve(int a[], int b[], int n, int x)
{
    bool count = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i + x])
        {
            count = false;
            break;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int x = 0;
        while (solve(a, b, n, x) != true)
        {
            n = n - 1;
            x++;
        }
        cout << x << endl;

        t--;
    }
}