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
#define aint(v) (v).begin(), (v).end()
int M = 1000000007;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int pl=0,mn=0;
    for(int i=0;i<n;i++){
        if(s[i]=='+'){
            pl++;
        }else{
            mn++;
        }
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        if(pl==mn){
            cout<<"YES"<<endl;
        }else{
            if(a==b){
                cout<<"NO"<<endl;
            }else{
                if(((pl-mn)*b)%(b-a)!=0){
                    cout<<"NO"<<endl;
                }else{
                    int x=((pl-mn)*b)/(b-a);
                    if(x<=pl && x+mn>=0){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
