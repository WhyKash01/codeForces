#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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

void solve()
{
    string s;
    cin>>s;
    int x= s.length();
    int count=0;
    int zcount=0;
    map<int,int>mp;
    for(int i=0;i<x;i++){
        if(s[i]=='1'){
            count++;
           mp[count]=zcount;
       }
       else{
        zcount++;
       }
    }
    int ans=max(0ll,count-1);
    int l=0;
    int r=count;
    auto fn=[&](int val){
         int lp=0;
         int rp=x-1;
        for(int i=0;i<=val;i++){
          int curr=mp[(count-(val-i))]-mp[i+1];
          if(curr<=val)return true;
        }
         
        return false;
    };
    while(l<=r){
        int mid=(l+r)/2;
        if(fn(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
         l=mid+1;
        }
    }
    cout<<ans<<endl;
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
