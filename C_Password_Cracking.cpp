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
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cout<<"? "<<s+"0"<<endl;
        int x;cin>>x;
        if(x){
            s+="0";
        }
        else{
            cout<<"? "<<s+"1"<<endl;
            int y;cin>>y;
            if(y){
                s+="1";
            }
            else{
                break;
            }
        }
    }
    int l=s.size();
    for (int i = 0; i < n-l; i++)
    {
        cout<<"? "<<"0"+s<<endl;
        int x;cin>>x;
        (x)?s="0"+s:s="1"+s;
    }
    cout<<"! "<<s<<endl;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}