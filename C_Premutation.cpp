#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                int x;
                cin>>x;
                v[i].push_back(x);
            }
        }
        int z=v[0][0];
        int sec;
        for (int i = 0; i < n; i++)
        {
            if(v[1][0]!=z&&v[2][0]!=z){
                sec=0;
                break;
            }
            if(v[i][0]!=z){
                sec=i;
                break;
            }
        }
        int ans;
        if(sec==0){
            ans=v[1][0];
        }
        else{
            ans=v[sec-1][0];
        }
        cout<<ans<<" ";
        for (int i = 0; i < n-1; i++)
        {
            cout<<v[sec][i]<<" ";
        }
        cout<<endl;
    }
}
