#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            long long count;
            if(arr[0]*b>c){
                count = c;
            }
            else{
                count = arr[0]*b;
            }
            if (count < a)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            
            long long count = 0;
            if(arr[0]*b>c){
                count = c;
            }
            else{
                count = arr[0]*b;
            }
            for (int i = 0; i < n-1; i++)
            {
                if ((arr[i + 1] - arr[i]) * b <= c)
                {
                    count = count + (arr[i + 1] - arr[i]) * b;
                }
                else
                {
                    count = count + c;
                }
            }
            
            if (count < a)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        t--;
    }
}