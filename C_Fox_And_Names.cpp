#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define ppi pair<pair<int, int>, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define sz(v) (int)v.size()
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;

void solve()
{
    int n; cin>>n;
    vector<string> v(n); 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> graph(26);
    vector<int> indegree(26);
    string ans="";
    for(int i=1;i<n;i++)
    {
        int curr=0;
        while(curr<sz(v[i-1]) and curr<sz(v[i]) and v[i-1][curr]==v[i][curr])
        {
            curr++;
        }
        if(curr<sz(v[i-1]) and curr<sz(v[i]) and v[i-1][curr]!=v[i][curr])
        {
            graph[v[i-1][curr]-'a'].pb(v[i][curr]-'a');
            indegree[v[i][curr]-'a']++;
        }
        else if(curr<sz(v[i-1]) and curr==sz(v[i]))
        {
            cout<<"Impossible\n";
            return;
        }
    }
    set<int> st;
    for(int i=0;i<26;i++)
    {
        if(indegree[i]==0) st.insert(i);
    }
    while(!st.empty())
    {
        int node=*st.begin(); 
        st.erase(st.begin());
        ans.pb('a'+node);
        for(auto &it:graph[node])
        {
            indegree[it]--;
            if(indegree[it]==0) st.insert(it);
        }
    }
    if(sz(ans)<26) cout<<"Impossible\n";
    else cout<<ans<<endl;
}   

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}