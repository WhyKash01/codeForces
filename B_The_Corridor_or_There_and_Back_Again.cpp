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
        cin>>n;
        vector<pair<int,int>> points(n);
        int mins;
        for (int i = 0; i < n; i++)
        {
            cin>>points[i].first>>points[i].second;
        }
        mins=points[0].first+(points[0].second-1)/2;
        for (int i = 1; i < n; i++)
        {
            mins=min((points[i].first+(points[i].second-1)/2),mins);
        }
        cout<<mins<<endl;
        t--;
    }
}