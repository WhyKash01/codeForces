#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int M = 998244353;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    pair<int,int>Max;
    pair<int,int>Min;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i==0){
            Max.first=a[i];
            Min.first=a[i];
            Max.second=0;
            Max.second=0;
        }
        if(Max.first<a[i]){
            Max.first=a[i];
            Max.second=i;
        }
        if(Min.first>a[i]){
            Min.first=a[i];
            Min.second=i;
        }
    }
    vector<pair<int,int>>v;
    if(Max.first>(-Min.first)&&Max.first>0){
        for (int i = 1; i < n; i++)
        {
            while(a[i]<a[i-1]){
                v.push_back({i,Max.second});
                a[i]=a[i]+Max.first;
                if(Max.first<a[i]){
                    Max.first=a[i];
                    Max.second=i;
                }
            }
        }
    }
    else{
        for (int i = n-2; i >=0 ; i--)
        {
            while(a[i]>a[i+1]){
                a[i]=a[i]+Min.first;
                v.push_back({i,Min.second});
                if(Min.first>a[i]){
                    Min.first=a[i];
                    Min.second=i;
                }
            }
        }
        
    }
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
    }
    
    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
