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

void solve()
{
    int n,h;
    cin>>n>>h;int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int x=0,y=0,z=0;
    int p=h,q=h,r=h;
    int cnt1=0,cnt2=0,cnt3=0;
    for (int i = 0; i < n; i++)
    {
        if(p>a[i]){
            p+=a[i]/2;
            x++;
        }
        else if(cnt1<3){
            while(cnt1<3){
                if(cnt1==0){
                    p*=2;
                }
                else if(cnt1==1){
                    p*=2;
                }
                else{
                    p*=3;
                }
                cnt1++;
                if(p>a[i]){
                    break;
                }
            }
            if(p>a[i]){
                p+=a[i]/2;
                x++;
            }
            else{
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(q>a[i]){
            q+=a[i]/2;
            y++;
        }
        else if(cnt2<3){
            while(cnt2<3){
                if(cnt2==0){
                    q*=2;
                }
                else if(cnt2==1){
                    q*=3;
                }
                else{
                    q*=2;
                }
                cnt2++;
                if(q>a[i]){
                    break;
                }
            }
            if(q>a[i]){
                q+=a[i]/2;
                y++;
            }
            else{
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(r>a[i]){
            r+=a[i]/2;
            z++;
        }
        else if(cnt3<3){
            while(cnt3<3){
                if(cnt3==0){
                    r*=3;
                }
                else if(cnt3==1){
                    r*=2;
                }
                else{
                    r*=2;
                }
                cnt3++;
                if(r>a[i]){
                    break;
                }
            }
            if(r>a[i]){
                r+=a[i]/2;
                z++;
            }
            else{
                break;
            }
        }
    }
    cout<<max({x,y,z})<<endl;
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
