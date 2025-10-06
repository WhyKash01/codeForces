#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;cin>>n>>k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=i+1;
    }
    if(k%2!=0){
        cout<<"No"<<endl;
    }
    else{
        ll cnt=0;
        for (int i = 0; i < n-cnt; i++)
        {
            if(k<=((n-cnt)-(i+1))*2){
                swap(a[i],a[i+k/2]);
                k=0;
                break;
            }
            else{
                swap(a[i],a[n-cnt-1]);
                k-=((n-cnt)-(i+1))*2;
            }
            cnt++;
        }
        if(k!=0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
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