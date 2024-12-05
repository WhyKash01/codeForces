#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n/2; i++)
        {
            cout<<i+1<<" ";
            cout<<n-i<<" ";
        }
        if(n&1){
            cout<<n/2+1;
        }
        cout<<endl;
    }
    return 0;
}