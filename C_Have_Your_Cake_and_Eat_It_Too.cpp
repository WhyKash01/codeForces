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
    int n;cin>>n;
    vector<vector<int>>v(3,vector<int>(n+1));
    vector<vector<int>>pref(3,vector<int>(n+1));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>v[i][j];
            pref[i][j]=pref[i][j-1]+v[i][j];
        }
    }
    int x=pref[0][n]/3;
    if(pref[0][n]%3!=0){
        x++;
    }
    int a[6][3]={{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
    bool f=false;
    for (int i = 0; i < 6; i++)
    {
        int cur=1;
        while(pref[a[i][0]][cur]<x){
            cur++;
        }
        for(int j=cur+1;j<n;j++){
            if(pref[a[i][1]][j] - pref[a[i][1]][cur] >= x && pref[a[i][2]][n] - pref[a[i][2]][j] >= x){
                vpii ans(3);

                ans[a[i][0]] = {1,cur};
                ans[a[i][1]] = {cur+1,j};
                ans[a[i][2]] = {j+1,n};

                for(auto x: ans) cout<<x.first<<" "<<x.second<<" ";
                cout<<endl;
                f = 1;
                break;
            }
        }
        if(f)break;
    }
    if(!f){
        cout<<-1<<endl;
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


