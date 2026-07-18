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
int MOD = 1e9 + 7;

void solve()
{
    int r,g,b;
    cin>>r>>g>>b;
    pair<int,char> a[3];
    a[0]={r,'R'};
    a[1]={g,'G'};
    a[2]={b,'B'};
    sort(a,a+3);
    int p=a[2].first,q=a[1].first,z=a[0].first;
    if(a[2].first>=a[1].first+a[0].first){
        for (int i = 0; i < q; i++)
        {
            cout<<a[2].second<<a[1].second;
            p--;
        }
        for (int i = 0; i < z; i++)
        {
            cout<<a[2].second<<a[0].second;
            p--;
        }
        if(p){
            cout<<a[2].second;
        }
        cout<<endl;
    }
    else{
        while(q!=z){
            cout<<a[2].second<<a[1].second;
            p--;
            q--;
        }
        while(p>q+1){
            if(q==0){
                break;
            }
            cout<<a[2].second<<a[1].second<<a[2].second<<a[0].second;
            p-=2;
            q--;
            z--;
        }
        bool f=false;
        if(p==q+1){
            cout<<a[2].second;
            f=true;
        }
        string s;
        s.push_back(a[2].second);
        s.push_back(a[1].second);
        s.push_back(a[0].second);
        int curr=0;
        if(f){
            curr=2;
        }
        while(q!=0){
            cout<<s[curr%3]<<s[(curr+1)%3]<<s[(curr+2)%3];
            curr++;
            q--;
        }
        cout<<endl;
    }
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