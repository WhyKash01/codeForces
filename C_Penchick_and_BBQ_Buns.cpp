#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    if(n%2==0){
        for (int i = 0; i < n/2; i++)
        {
            cout<<i+1<<" "<<i+1<<" ";
        }
        cout<<endl;
    }
    else if(n>26){
        ll a[n]={0};
        a[0]=1; a[9]=1;a[25]=1;
        a[26]=2;a[22]=2;a[23]=3,a[24]=3;
        ll cnt=4;
        for (int i = 1; i < 8; i+=2)
        {
            a[i]=cnt;a[i+1]=cnt;
            cnt++;
        }
        for (int i = 10; i < 22; i+=2)
        {
            a[i]=cnt,a[i+1]=cnt;
            cnt++;
        }
        for (int i = 27; i < n; i+=2)
        {
            a[i]=cnt,a[i+1]=cnt;
            cnt++;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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