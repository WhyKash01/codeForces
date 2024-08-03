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
        string arr;
        cin >> arr;
        if (n == 1 && arr[0] == '1')
        {
            cout << "NO" << endl;
        }
        else if (n == 1 && arr[0] == '0')
        {
            cout << "YES" << endl;
        }
        else
        {
            int flag = 0;
            int index, count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == '1' && flag == 0)
                {
                    flag = 1;
                    index = i;
                    count++;
                }
                else if (arr[i] == '1')
                {
                    count++;
                }
            }
            if (count % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else if (count == 0)
            {
                cout << "YES" << endl;
            }
            else if (count == 2 && arr[index] == arr[index + 1])
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        t--;
    }
}