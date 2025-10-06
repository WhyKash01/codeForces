#include <bits/stdc++.h>
//#include <bits/bits-stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define INP_arr(a, n) for(int i=0; i<n; i++) cin>> a[i];

static bool custom_sort(const pair<int,int>& a, const pair<int,int>& b)
{
    return a.second<b.second;
}

void solve()
{
    int n, k; cin>> n >>k;
    vector<pair<int, int>> data(n, {0,0});
    for(int i=0; i<n; i++) cin>> data[i].first;
    for(int i=0; i<n; i++) cin>> data[i].second;

    sort(all(data), custom_sort);
    int times=1;
    int total_dmg_dealt = k;
    for(int i=0; i<n; i++)
    {   
        while(data[i].first > total_dmg_dealt)
        {
            k -= data[i].second;
            total_dmg_dealt += k;
            
            if(k<=0)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
    return;
    
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    
    int t; cin>> t;
    while(t--) solve();
}