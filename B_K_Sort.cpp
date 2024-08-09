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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max=0;
        vector<long long> a;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>max){
                max=arr[i];
            }
            else{
                a.push_back(max-arr[i]);
            }
        }
        long long l=a.size();
        long long ans=0;
        long long minus=0;
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            a[i]=a[i]-minus;
            minus=minus+a[i];
            ans=ans+a[i]*(l-i+1);
            
        }
        
        cout<<ans<<endl;
        t--;
    }
}