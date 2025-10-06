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
        string s; cin >> s; s += s;
        int k = 0, z = 0;
        for (char c : s) {
            z = c == '1' ? z+1 : 0;
            k = max(k, z);
        }
        const int n = s.size() / 2;

        if (k > n) {
            cout << (ll)n*n << '\n';
        } else {
            const ll side_a = (k+1)/2;
            const ll side_b = (k+2)/2;
            cout << side_a * side_b << '\n';
        }
        // string s;
        // cin >> s;
        // vector<int> v;
        // int curr=0, start=0,end=0,flag=0;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if(s[i]=='1'&&i==s.size()-1){
        //         curr++;
        //     }
        //     else if(s[i]=='1'&&!flag){
        //         flag=1;
        //         curr++;
        //     }
        //     else if(s[i]=='0'){
        //         flag=0;
        //         v.push_back(curr);
        //         curr=0;
        //     }
        //     else{
        //         curr++;
        //     }
        // }
        // v.push_back(curr);
        // if(v.size()>1){
        //     if(v[0]>0&&v[v.size()-1]>0){
        //         v.push_back(v[0]+v[v.size()-1]);
        //     }
        // }
        // int Max=0;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     Max=max(Max,v[i]);
        // }
        // ll ans=0;
        // int x=Max;
        // if(Max==s.size()){
        //     cout<<(ll)Max*Max<<endl;
        // }
        // else{

        // for (int i = 0; i < Max; i++)
        // {
        //     ans=max(ans,1LL*x*(i+1));
        //     x--;
        // }
        // cout<<ans<<endl;
        // }
    }
}
