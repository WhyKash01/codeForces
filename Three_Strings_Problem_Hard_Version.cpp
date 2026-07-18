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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int x1=0,x2=0,y1=0,y2=0;
    for (int i = 0; i < n; i++)
    {
        if(s2[i]!=s3[i]){
            if(s2[i]=='0'){
                if(s1[i]=='0'){
                    x1++;
                }
                else{
                    x2++;
                }
            }
            else{
                if(s1[i]=='0'){
                    y1++;
                }
                else{
                    y2++;
                }
            }
        }
    }
    int z=min(x1,y1);
    x1-=z;
    y1-=z;
    z=min(x2,y2);
    x2-=z;
    y2-=z;
    if(x1==0&&x2==0){
        cout<<y1+y2<<endl;
    }
    else if(y1==0&&y2==0){
        cout<<x1+x2<<endl;
    }
    else if(x1==0){
        cout<<max(x2,y1)<<endl;
    }
    else {
        cout<<max(x1,y2)<<endl;
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
