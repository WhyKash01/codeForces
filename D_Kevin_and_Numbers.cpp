#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));

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
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
 
   
    sort(a.begin(),a.end());
    priority_queue<int>pq;
    for(auto it : b){
        pq.push(it);
    }
 
 
    if(m>n){
        cout<<"No"<<'\n';
        return;
    }
 
    while(!pq.empty()){
        if(pq.size()>n){
            cout<<"No"<<'\n';
            return;
        }
        int ele = pq.top();
        pq.pop();
 
        if(ele > a.back()){
            int num1 = ele/2;
            int num2 = ele-num1;
            pq.push(num1);
            pq.push(num2);
 
        } else if(ele==a.back()){
            a.pop_back();
        } else{
            cout<<"No"<<'\n';
            return;
        }
 
        
    }
 
    if(a.empty()){
        cout<<"Yes"<<'\n';
    }else{
        cout<<"No"<<'\n';
    }
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