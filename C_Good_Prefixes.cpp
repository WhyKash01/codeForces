#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long arrr[n];
        int count = 0;
        long long ans = 0;
        long long Max = 0;
        for (int i = 0; i < n; i++)
        {
            Max = max(Max, arr[i]);
            arrr[i] = Max;
            ans += arr[i];
        }

        // sort(arr,arr+n);

        for (int i = n - 1; i >= 0; i--)
        {

            if (ans - arrr[i] == arrr[i])
            {

                count++;
            }
            ans = ans - arr[i];
        }

        cout << count << endl;
        t--;
    }
}