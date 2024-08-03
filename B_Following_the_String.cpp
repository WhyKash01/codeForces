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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<char, int> map;
        char temp = 'a';
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                map[temp] = 1;
                ans = ans + temp;
                temp++;
            }
            else
            {
                unordered_map<char, int>::iterator it = map.begin();
                while (it != map.end())
                {
                    if (arr[i] == it->second)
                    {
                        it->second++;
                        ans += it->first; // Assuming ans is already declared and initialized
                        break;
                    }
                    ++it;
                }
            }
        }
        cout << ans << endl;
        t--;
    }
}