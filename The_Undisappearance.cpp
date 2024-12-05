#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            set<int> fir;
            set<int> sec; 
            for (int j = 0; j < n; j++)
            {
                fir.insert(arr[j]);
            }
            for (int j = i; j < n; j++)
            {
                sec.clear();
                for (int k = 0; k < i; k++)
                {
                    sec.insert(arr[i]);
                }
                for (int k = i; k <=j; k++)
                {
                    sec.insert((arr[i]%3)+1);
                }
                for (int k = j+1; k < n; k++)
                {
                    sec.insert(arr[i]);
                }
                if(sec.size()==3){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}