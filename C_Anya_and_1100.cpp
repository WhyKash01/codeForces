#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
ll binaryExpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll res = binaryExpo(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
}
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int q;
        cin>>q;
        vector<pair<int,char>> v;
        for (int i = 0; i < q; i++)
        {
            int x;
            char c;
            cin>>x>>c;
            v.push_back({x-1,c});
        }
        set<int> m;
        int n=s.size();
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                if( s.substr(i, 4)=="1100"){
                    m.insert(i);
                }
            }
        }
        for (int i = 0; i < q; i++)
        {
            if(s[v[i].first]==v[i].second){
                if(m.size()>0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                s[v[i].first]=v[i].second;
                if(m.find(v[i].first)!=m.end()){
                    m.erase(v[i].first);
                }
                else if(m.find(v[i].first-1)!=m.end()){
                    m.erase(v[i].first-1);
                }
                else if(m.find(v[i].first-2)!=m.end()){
                    m.erase(v[i].first-2);
                }
                else if(m.find(v[i].first-3)!=m.end()){
                    m.erase(v[i].first-3);
                }
                    if(v[i].first>2){
                        for (int j = v[i].first-3; j <= v[i].first; j++)
                        {
                            if( s.substr(j, 4)=="1100"){
                                m.insert(j);
                            }
                        }
                    }
                    else{
                        for (int j = 0; j <= v[i].first; j++)
                        {
                            if( s.substr(j, 4)=="1100"){
                                m.insert(j);
                            }
                        }
                    }
                
                if(m.size()>0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        
    }
}
