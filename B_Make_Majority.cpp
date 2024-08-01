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
        cin>>arr;

        if (n == 1 && arr[0] == 0)
        {
            cout << "No" << endl;
        }
        else if (n == 1 && arr[0] == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {

            int zero = 0;
            int one = 0;
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == '1')
                {
                    one++;
                    flag = true;
                }
                else if (arr[i] == '0' && flag == true)
                {
                    zero++;
                    flag = false;
                }
            }
            if (zero >= one)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
        t--;
    }
}