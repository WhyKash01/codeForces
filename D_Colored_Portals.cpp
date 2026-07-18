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
    int n,q;
    cin>>n>>q;
    string s[n];
    vector<vector<int>>v(6);
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        if(s[i]=="BG"){
            v[0].push_back(i);
        }
        else if(s[i]=="BR"){
            v[1].push_back(i);
        }
        else if(s[i]=="BY"){
            v[2].push_back(i);
        }
        else if(s[i]=="GR"){
            v[3].push_back(i);
        }
        else if(s[i]=="GY"){
            v[4].push_back(i);
        }
        else{
            v[5].push_back(i);
        }
    }
    vector<string>st={"BG","BR","BY","GR","GY","RY"};
    for (int i = 0; i < q; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x==y){
            cout<<0<<endl;
        }
        else if(s[x-1][0]==s[y-1][0]||s[x-1][0]==s[y-1][1]||s[x-1][1]==s[y-1][0]||s[x-1][1]==s[y-1][1]){
            cout<<abs(x-y)<<endl;
        }
        else{
            if(x<y){
                swap(x,y);
            }
            int ans=2*n;
            bool f=false;
            for(int j=0;j<6;j++){
                
                if(v[j].size()==0){
                    continue;
                }
                if(st[j]!=s[x-1]&&st[j]!=s[y-1]){
                    int z=upper_bound(v[j].begin(),v[j].end(),y-1)-v[j].begin();
                    if(z<v[j].size()){
                        if(v[j][z]<x){
                            f=true;
                            ans=abs(x-y);
                            break;
                        }
                    }
                    int p=upper_bound(v[j].begin(),v[j].end(),x-1)-v[j].begin();
                    int q=lower_bound(v[j].begin(),v[j].end(),y-1)-v[j].begin()-1;
                    if(p<v[j].size()){
                        f=true;
                        ans=min(ans,abs((x-1)-v[j][p])+abs((y-1)-v[j][p]));
                    }
                    if(q>-1){
                        f=true;
                        ans=min(ans,abs((x-1)-v[j][q])+abs((y-1)-v[j][q]));
                    }
                }
            }
            if(!f){
                cout<<-1<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
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
