

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
        ll l,r;
        cin>>l>>r;
        ll x=1<<31;
        x--;
        ll z=r^l,cnt=0;
        while(x&z){
            z=z>>1;
            cnt++;
        }
        ll k=1<<cnt;k--;
        ll ld=l&k,rd=r&k;
        ld=ld^k,rd=rd^k;
        ll ans=1<<30;
        ans--;
        ans=ans<<cnt;
        ll ansl=ans&l,ansr=ans&r;
        ansl+=ld;ansr+=rd;
        if(ansr>=l&&ansr<r){
            ll d=l;
            if(d==ansr){
                d++;
            }
            cout<<ansr<<" "<<d<<" "<<r<<endl;
        }
        else{
            ll d=r;
            if(ansl==d){
                d--;
            }
            cout<<l<<" "<<ansl<<" "<<d<<endl;
        }
    }
    return 0;
}