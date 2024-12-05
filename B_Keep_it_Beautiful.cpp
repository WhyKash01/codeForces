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
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> ans;
        ans.push_back(arr[0]);
        ll count = 0, prv = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (count == 1 && arr[i] <= arr[0] && arr[i] >= prv)
            {
                ans.push_back(arr[i]);
                prv = arr[i];
            }
            else if (arr[i] >= prv && count == 0)
            {
                ans.push_back(arr[i]);
                prv = arr[i];
            }
            else if (arr[i] < prv && arr[i] <= arr[0] && count == 0)
            {
                count++;
                prv = arr[i];
                ans.push_back(arr[i]);
            }
        }
        int point = 0;

        for (int i = 0; i < n; i++)
        {
            if (point == ans.size())
            {
                cout << 0;
            }
            else
            {

                if (arr[i] == ans[point])
                {
                    cout << 1;
                    point++;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << endl;
        t--;
    }
}