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
pair<int,int> insert(int n,int k,vector<int>& v){
    while(k>n){
        k-=n;
        n--;
        v.push_back(1000);
    }
    return {n,k};
}
void solve()
{
    
    int n,k;cin>>n>>k;
    vector<int> v;
    pii x=insert(n,k,v);
    for (int i = 1; i <= x.first; i++)
    {
        if(i<x.second){
            cout<<-1<<" ";
        }
        else if(i==x.second){
            cout<<200<<" ";
        }
        else if(i==x.second+1){
            cout<<-400<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

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