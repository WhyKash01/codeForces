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
    int n,m;
    cin>>n>>m;
    if(n>m){
        cout<<-1<<endl;
    }
    else if(m>(n*(n+1))/2){
        cout<<-1<<endl;
    }
    else{
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            s.insert(i+1);
        }
        int x=n;
        if(x==1&&m==1){
            cout<<1<<endl;
            return;
        }
        if(m>n+(n-1)){
            cout<<n<<endl;
            int z=n;
            s.erase(n);
            m-=x;
            x--;
            while(x>0){
                if(x+(x-1)>m){
                    break;
                }
                cout<<z<<" "<<x<<endl;
                s.erase(x);
                m-=x;
                z=x;
                x--;
            }
            if(x>0){
                cout<<z<<" "<<m-(x-1)<<endl;
                if(m-(x-1)>1){

                    cout<<m-(x-1)<<" "<<1<<endl;
                    s.erase(1);
                    s.erase(m-(x-1));
                    z=1;
                    for(auto i:s){
                        cout<<z<<" "<<i<<endl;
                        z=i;
                    }
                }
            }
        }
        else{
            cout<<m-(x-1)<<endl;
            if(m-(x-1)>1){

                cout<<m-(x-1)<<" "<<1<<endl;
                s.erase(1);
                s.erase(m-(x-1));
                int z=1;
                for(auto i:s){
                    cout<<z<<" "<<i<<endl;
                    z=i;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}
