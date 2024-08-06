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
        int arr1[n];
        int arr2[n+1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[arr1[i]];
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << i+1<< " ";
        }
        cout << endl;
        for (int i = 1; i <=n; i++)
        {
            cout << arr2[i] << " ";
        }

        cout << endl;
        t--;
    }
}