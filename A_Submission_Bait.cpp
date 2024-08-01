#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = arr[n - 1];
        bool odd = false;
        sort(arr, arr + n, greater<int>());
        for (int i = n - 1; i >= 0; i--)
        {
            if (max == arr[i])
            {
                odd = !odd;
            }
            else if (!odd)
            {
                max = arr[i];
                odd = !odd;
            }
        }
        if (odd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
}