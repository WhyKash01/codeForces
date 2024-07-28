#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, m;
        cin >> n >> m;
        
            int arr[n][m];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cin >> arr[i][j];
                }
            }
            if (n == 1 && m == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int last = arr[n - 1][m - 1];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (j == 0)
                    {
                        arr[(i - 1 + n) % n][(j - 1 + m) % m] = arr[i][j];
                    }
                    else
                    {
                        arr[i][(j - 1 + m) % m] = arr[i][j];
                    }
                }
            }
            if (m > 1)
            {
                arr[n - 1][m - 2] = last;
            }
            else
            {
                arr[n - 2][m - 1] = last;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
        t--;
    }
}