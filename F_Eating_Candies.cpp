#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int AcandyW = 0, BcandyW = 0, AlastCnt = 0, BlastCnt = 0, Aptr = 0, Bptr = n - 1,ans=0;
        
        while (n--)
        {
            if(AcandyW>BcandyW){
                BcandyW+=a[Bptr];
                BlastCnt++;
                Bptr--;
            }
            else{
                AcandyW+=a[Aptr];
                AlastCnt++;
                Aptr++;
            }
            if(AcandyW==BcandyW&&AcandyW!=0){
                ans=BlastCnt+AlastCnt;
            }
        }
        
        cout << ans << endl;
    }
}