

#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
const ll M = 1000000007;

bool comp(pair<int, ll> a, pair<int, ll> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> s;
        map<ll,ll>m;
        ll a[n];
        vector<ll> fir,sec;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            a[i]=x;
            m[x]++;
            s.insert(x);
        }
        if(s.size()==1){
            cout<<2<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<2<<" "<<n<<endl;
        }
        else if(*s.begin()!=0){
            cout<<2<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<2<<" "<<n<<endl;
        }
        else{
            bool ans=true;
            ll ele=*s.rbegin(),last;
            for (auto i = s.begin(); i != s.end(); i++)
            {
                
                if(i==s.begin()&&m[*i]<=1){
                    ans=false;
                    break;
                }
                else if(i==s.begin()){
                    ele=last;
                    last=*i;
                }
                else if(*i!=last+1){
                    ele=last;
                    break;
                }
                else if(m[*i]<=1){
                    ele=last;
                    ans=false;
                    break;
                }
                else{
                    last=*i;
                    ele=last;
                }
            }
            if(ans){
                ll f=*s.begin(),l=ele+1;
                set<int> it,bc;
                ll cnt=ele;
                bool z=true;
                ll asd=0;
                for (int i = 0; i < n; i++)
                {
                    if(it.size()==l){
                        asd=i;
                        break;
                    }
                    if(a[i]<=ele&&m[a[i]]>1){
                        it.insert(a[i]);
                        m[a[i]]--;
                    }
                    else if(a[i]<=ele&&m[a[i]]==1){
                        z=false;
                        break;
                    }
                }
                if(z){
                    cout<<2<<endl;
                    cout<<1<<" "<<asd<<endl;
                    cout<<asd+1<<" "<<n<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
                
            }
            else{
                cout<<-1<<endl;
            }
            
        }
    }
    return 0;
}