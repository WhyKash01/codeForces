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
        int max = arr[0];
        int index = 0;
        for (int i = 1; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                index = i;
            }
        }
        if (index == n - 1)
        {
            int max2 = arr[0];
            int index2 = 0;
            for (int i = 1; i < n-1; i++)
        {
            if (max2 < arr[i])
            {
                max2 = arr[i];
                index2 = i;
            }
        }
            cout << max + arr[index2] << endl;
        }
        else if (index == 0)
        {
            cout << max + arr[n - 1] << endl;
        }
        else
        {
            cout << max + arr[n - 1] << endl;
        }
        t--;
    }
}