#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n,m,k;
        cin >> n>>m>>k;
        int x=n;
        for (int i = 0; i < n-k+1; i++)
        {
            cout<<x-i<<" ";
        }
        for (int i = 0; i < k-m-1; i++)
        {
            cout<<k-i-1<<" ";
        }
        for (int i = 0; i < m; i++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
        t--;
    }
}