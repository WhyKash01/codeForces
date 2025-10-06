#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int,int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define pb push_back
#define ppb pop_back
#define inp(v) for(auto& x : v) cin >> x;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(v) (v).begin(),(v).end()


void solve()
{
    string s;
    cin>>s;
    int l=s.size();
    int it=-1;
    for (int i = l-2; i >= (l)/2; i--)
    {
        bool x=true;
        int cur=l-1;
        for (int j = i; j >= 0; j--)
        {
            if(s[j]!=s[cur]){
                x=false;
                break;
            }
            cur--;
        }
        if(x){
            it=i;
            break;
        }
    }
    if(it!=-1){
        cout<<"YES\n";
        for (int i = 0; i <= it; i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    else{
        cout<<"NO\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while(t--)
    {
        solve();
    }
}