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
int M = 1000000007;

int fac[14];

int rec(int x,int val){
if(val==0){
return 0;
}    
if(val<0){
    return 100;
}
if (x<0){
    return __builtin_popcountll(val);
}
 
 
int option_one=__builtin_popcountll(val);
int second_option=100;
if(fac[x]<=val){
   second_option= 1+rec(x-1,val-fac[x]);
}
int third_option=rec(x-1,val);
return min({option_one,second_option,third_option});
 
}
void solve()
{
    int n;
    cin>>n;
    cout<<rec(13,n)<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    int lim=1000000000000;
    int start=1;
    for(int i=2;;i++){
        fac[i-2]=start;
        start=start*i;
        if(start>lim){
            break;
        }
    }
    while (t--)
    {
        solve();
    }
}
