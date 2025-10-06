#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
const ll M = 1000000007;
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
        string s;
        cin >> s;
        vector<int> l, r;
        bool f = true;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == 'L')
            {
                l.push_back(i);
            }
            if (s[i] == 'R')
            {
                r.push_back(i);
            }
        }
        reverse(r.begin(), r.end());

        map<int, int> m;
        int i = 0;
        ll sum = 0;
        vector<int> ml, mr;
        while (true)
        {
            if (i >= l.size() || i >= r.size())
            {
                break;
            }
            if (l[i] < r[i])
            {
                ml.push_back(l[i]);
                mr.push_back(r[i]);
                i++;
            }
            else
            {
                break;
            }
        }
        reverse(mr.begin(), mr.end());
        // for (int i = 0; i < ml.size(); i++)
        // {
        //     cout<<ml[i]<<" ";
        // }
        // cout<<endl;
        // for (int i = 0; i < mr.size(); i++)
        // {
        //     cout<<mr[i]<<" ";
        // }
        // cout<<endl;
        ll curr = 0, fir = 0, sec = 0;
        for (int i = 0; i < n; i++)
        {
            if (fir < ml.size())
            {

                if (i == ml[fir])
                {
                    curr += 1;
                    fir++;
                }
            }
            ll x=0;
            if (sec < mr.size())
            {
                if (i == mr[sec])
                {
                    x=1;
                    curr--;
                    sec++;
                }
            }
            sum += (curr+x) * a[i];
        }
        cout << sum << endl;
    }
    return 0;
}