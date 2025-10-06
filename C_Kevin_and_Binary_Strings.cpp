
#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int Floor(int x, int y)
{
    return floor(static_cast<double>(x) / y);
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
        string s;
        cin>>s;
        ll n=s.size();
        ll f=-1;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                f=i;
                break;
            }
        }
        if(f==-1){
            cout<<1<<" "<<n<<" "<<1<<" "<<1<<endl;
        }
        else{
            ll Max=INT16_MIN;
            pair<ll,ll>p;
            for (int i = 0; i <= f; i++)
            {
                ll curr=f,cnt=0;
                for (int j = i; j < n-f+i; j++)
                {
                    if(s[curr]!=s[j]){
                        cnt++;
                    }
                    else{
                        break;
                    }
                    curr++;
                }
                if(cnt>=Max){
                    p.first=i;
                    p.second=n-f+i-1;
                    Max=cnt;
                }
            }
            cout<<1<<" "<<n<<" "<<p.first+1<<" "<<p.second+1<<endl;
        }
    }
    return 0;
}