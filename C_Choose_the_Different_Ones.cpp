#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        
        int n,m,k;
    cin>>n>>m>>k;
    vector<int>a;
    vector<int>b;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x<=k)a.push_back(x);
    }
    
    for(int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        if(x<=k)b.push_back(x);
    }
    
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    
    vector<int>c;
    for(int x:a)
    c.push_back(x);
    
    for(int x:b)
    c.push_back(x);
    
    sort(c.begin(),c.end());
    c.erase(unique(c.begin(),c.end()),c.end());
    
    if(c.size()==k&&a.size()>=k/2&&b.size()>=k/2)puts("YES");
    else puts("NO");
    }
    return 0;
}