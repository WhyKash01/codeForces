#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long long mina = a[0], minb = b[0], suma = a[0], sumb = b[0];
        for (long long i = 1; i < n; i++)
        {
            suma += a[i];
            sumb += b[i];
            if (mina > a[i])
            {
                mina = a[i];
            }
            if (minb > b[i])
            {
                minb = b[i];
            }
        }
        minb = minb * n + suma;
        mina = mina * n + sumb;
        long long mins=min(mina,minb);
        cout << mins << endl;
        t--;
    }
}