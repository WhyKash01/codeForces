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

        int flag = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag++;
            }
        }
        if (flag > 1)
        {
            cout << "No" << endl;
        }
        else if (flag==0)
        {
            cout << "Yes" << endl;
        }
        else if (arr[0] < arr[n - 1])
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
        t--;
    }
}