#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[n-i-1];
    }
    ll b[n];
    ll cnt=1;
    if(a[0]==0){
        cout<<"YES"<<endl;
        for (int i = 0; i < n; i++)
    {
        if(a[i]==0){
            b[i]=0;
        }
        else{
            if(i==n-1){
               b[i]=cnt;
               cnt=1; 
            }
            else if(a[i]==a[i+1]){
                b[i]=0;
                cnt++;
            }
            else{
                b[i]=cnt;
                cnt=1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}