#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;cin>>n;
    map<pair<int,int>,int>m;
    int a[n],b[n];
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
        cin>>b[i];
    for (int i = 0; i < n; i++)
    {
        pair<int,int>p;
        p.first=a[i],p.second=b[i];
        m[p]++;
        v.push_back(p);
    }
    
    sort(a,a+n);
    sort(b,b+n);
    bool f=true;
    for (int i = 0; i < n; i++)
    {
        pair<int,int>p;
        p.first=a[i],p.second=b[i];
        if(m[p]==0){
            f=false;
            break;
        }
        m[p]--;
    }
    if(f){
        

        vector<pair<int,int>>ans;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(v[i]>v[j]){
                    swap(v[i],v[j]);
                    ans.push_back({i,j});
                }
            }
        }
        cout<<ans.size()<<endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
        }
        
        
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