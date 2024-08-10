#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
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
                int a;
                cin >> a;
                arr[i][j] = a;
            }
        }

        int arrr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int Max = 0;
                if (m > 1)
                {
                    if (j == 0)
                    {

                        Max = max(Max, arr[i][j + 1]);
                        
                    }
                    else if (j == m - 1)
                    {
                        Max = max(Max, arr[i][j - 1]);
                    }
                    else
                    {
                        int x = max(arr[i][j - 1], arr[i][j + 1]);
                        Max = max(Max, x);
                    }
                }

                if (n > 1)
                {
                    if (i == 0)
                    {
                        Max = max(Max, arr[i + 1][j]);
                    }
                    else if (i == n - 1)
                    {
                        Max = max(Max, arr[i - 1][j]);
                    }
                    else
                    {
                        int x = max(arr[i - 1][j], arr[i + 1][j]);
                        Max = max(Max, x);
                    }
                }

                if (arr[i][j] > Max)
                {

                    arrr[i][j] = Max;
                }
                else
                {
                    
                    arrr[i][j] = arr[i][j];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arrr[i][j] << " ";
            }
            cout << endl;
        }

        t--;
    }
}