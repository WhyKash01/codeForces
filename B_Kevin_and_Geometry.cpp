#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));

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
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool f=false;
    sort(a,a+n);
    int p,q,r,s;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]==a[i+1]){
            if(i>1){
                p=a[0],q=a[1],r=a[i],s=a[i+1];
                f=true;
                break;
            }
            else if(i==1&&(a[0]+a[1]+a[2]>a[3])){
                p=a[0],q=a[1],r=a[2],s=a[3];
                f=true;
                break;
            }
            else{
                int x=a[i]+a[i+1];
                for (int j =i+2 ; j < n-1; j++)
                {
                    if(x+a[j]>a[j+1]){
                        p=a[i],q=a[i],r=a[j],s=a[j+1];
                        f=true;
                        break;
                    }
                }
                if(f){
                    break;
                }
            }
        }
    }
    if(f){
        cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
    }
    else{
        cout<<-1<<endl;
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
