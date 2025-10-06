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
int M=1e9+7;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=s[i]-'0';
        // cout<<a[i]<<" ";
    }
    if(n==2){
        if(s[0]=='0'){
            cout<<s[1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    else if(n==3){
        int x=a[0]+a[1]*10+a[2];
        int y=a[0]*(a[1]*10+a[2]);
        int z=a[0]*10+a[1]+a[2];
        int w=(a[0]*10+a[1])*a[2];
        cout<<min(min(x,y),min(z,w))<<endl;
    }
    else{
        bool f=true;
        int Min=LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<=Min&&i<n-1){
                Min=a[i];
            }
            if(a[i]==0){
                f=false;
            }
        }
        if(!f){
            cout<<0<<endl;
        }
        else{
            int ans=0;
            bool x=true;
            bool y=true,z=true;

            for (int i = 0; i < n; i++)
            {
                if(!y&&a[i]!=1){
                    z=false;
                }
                if(a[i]==1){
                    y=false;
                }

            }
            
            for (int i = 0; i < n; i++)
            {
                if(x&&a[i]==Min){
                    ans+=a[i]*10;
                    x=false;
                    if(a[i+1]==1&&z){
                        ans++;
                    }
                }
                else if(a[i]!=1){
                    ans+=a[i];
                }
            }
            cout<<ans<<endl;
        }
    }
    return;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


