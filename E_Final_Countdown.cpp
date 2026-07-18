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
int MOD = 1e9 + 7;
string SumOfString(string s1,string s2){
    if(s2.size()>s1.size()){
        swap(s1,s2);
    }
    if(s2.size()==s1.size()){
        if(s2>s1){
            swap(s1,s2);
        }
    }
    if(s2.size()<s1.size()){
        int x=s1.size()-s2.size();
        reverse(s2.begin(),s2.end());
        for (int i = 0; i < x; i++)
        {
            s2.push_back('0');
        }
        reverse(s2.begin(),s2.end());
    }
    string z=s1;
    int carry=0;
    int n=s1.size();
    for (int i = n-1; i >=0 ; i--)
    {
        int a=s1[i]-'0'+s2[i]-'0';
        a+=carry;
        if(a>9){
            carry=1;
            a=a%10;
        }
        else{
            carry=0;
        }
        z[i]='0'+a;
    }
    if(carry){
        reverse(z.begin(),z.end());
        z.push_back('1');
        reverse(z.begin(),z.end());
    }
    return z;
}
void solve() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    string s1;
    bool f=false;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!='0'){
            f=true;
        }
        if(f){
            s1.push_back(s[i]);
        }
    }
    n=s1.size();
    int a[n];
    int p=0;
    string sum=s1;
    for (int i = 0; i < n; i++)
    {
        a[i]=p;
        p+=s1[i]-'0';
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(i>0){
            if(a[i]>9){
                a[i-1]+=a[i]/10;
                a[i]=a[i]%10;
            }
        }
        sum[i]='0'+a[i];
    }
    
    string ans=SumOfString(sum,s1);
    cout<<ans<<endl;
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
