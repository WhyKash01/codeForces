#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll x,y;
    set<ll>s;
    for (int i = 0; i < n; i++)
    {
        s.insert(i+1);
    }
    ll x1,y1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        s.erase(a[i]);
        if(i>0){
            if(a[i]!=a[0]){
                y=a[i];
                x=a[0];
            }
        }
        if(a[i]==1){
            x1=i+1;
        }
        if(a[i]==n){
            y1=i+1;
        }
    }
    
    
    if(s.size()==0){
        ll ans1,an2;
        cout<<"? "<<x1<<" "<<y1<<endl;
        cin>>ans1;
        
        if (ans1 < n - 1) {
            cout << "! A" << endl;
        } else if (ans1 > n - 1) {
            cout << "! B" << endl;
        } else {
            cout << "? " << y1 << ' ' << x1 << endl;
            cin >> an2;
            if (an2 == n - 1) {
                cout << "! B" << endl;
            } else {
                cout << "! A" << endl;
            }
        }
    }
    else{
        ll ans1,an2;
        cout<<"? "<<*s.begin()<<" "<<x<<endl;
        cin>>ans1;
        cout<<"? "<<*s.begin()<<" "<<x<<endl;
        cin>>an2;
        if(ans1!=0){
            cout<<"! B\n";
        }
        else{
            cout<<"! A\n";
        }
        
    }
    cout.flush();
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