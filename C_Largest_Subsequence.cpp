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
    string s;
    cin>>s;
    string x=s;
    sort(x.begin(),x.end());
    if(s==x){
        cout<<0<<endl;
        return;
    }
    char z;
    string a,b; 
    for (int i = n-1; i >=0; i--)
    {
        if(i==n-1){
            z=s[i];
            a.push_back(s[i]);
            b.push_back(x[i]);
        }
        else if(s[i]>=z){
            z=s[i];
            a.push_back(s[i]);
            b.push_back(x[i]);
        }
    }
    int it=0;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(it<s.size()){
            if(b[it]==s[i]){
                if(b[it]==x[n-1]){
                    cnt++;
                }
                s[i]=a[it];
                it++;
            }
        }
    }
    if(s==x){
        cout<<a.size()-cnt<<endl;
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
    cin>>t;
    while (t--)
    {
        solve();
    }
}
