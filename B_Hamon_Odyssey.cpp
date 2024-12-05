#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;

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
        int ans = 1;
        int curr = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (curr == 0)
            {
                ++ans;
                curr = arr[i];
            }
            curr=curr&arr[i];
        }

        if (ans > 1 && curr > 0)
            --ans;

        cout << ans << '\n';

        t--;
    }
}