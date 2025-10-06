#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int,int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define pb push_back
#define ppb pop_back
#define inp(v) for(auto& x : v) cin >> x;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(v) (v).begin(),(v).end()
int M=1e9+7;

void solve()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int one=0,two=0;
    int w=0,x=0,y=0,z=0;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        int sum=a[i]+b[i];
        if(sum<=0){
            if(sum==0){
                if(a[i]!=b[i]){
                    if(a[i]==1){
                        one++;
                        
                    }
                    else{
                        two++;
                    }
                }
            }
            else{
                if(sum==-2){
                    z++;
                }
            }
        }
        else{
            if(a[i]==0||b[i]==0){
                if(a[i]==1){
                    one++;
                }
                else{
                    two++;
                }
            }
            else{
                w++;
            }
        }
    }
    if(one>two){
        swap(one,two);
    }
    int q=min(z,two-one);
    z-=q;
    two-=q;
    if(one>two){
        swap(one,two);
    }
    if(z==0&&one==two){
        cout<<one+w/2<<endl;
    }
    else if(z==0){
        if(two-one>=w){
            cout<<one+w<<endl;
        }
        else{
            w-=two-one;
            cout<<two+w/2<<endl;
        }
    }
    else{
        if(w>=z){
            cout<<one+(w-z)/2<<endl;
        }
        else{
            int p=z-w;
            if(p%2==0){
                cout<<one-p/2<<endl;
            }
            else{
                cout<<one-p/2-1<<endl;
            }
        }
    }
    return;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


