#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
ll M = 1000000007;

bool comp(int a, int b)
{
    return a > b;
}

int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
bool is_equal(vector<ll> v){
    if(v.size()==1){
        return true;
    }
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i]!=v[i-1]){
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        priority_queue<pair<ll,ll>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push({a[i],i});
        }
        bool ans=true;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==1){
                ans=false;
            }
        }
        vector<pair<ll,ll>> asd;
        if(is_equal(a)){
            cout<<0<<endl;
        }
        else if(!ans){
            cout<<-1<<endl;
        }
        else{
            int ans=0;
            while (!is_equal(a))
            {
                ans++;
                ll Max=pq.top().first;
                int pos=pq.top().second; 
                pq.pop();
                vector<pair<ll,ll>> temp;
                while(Max==pq.top().first){
                    temp.push_back({pq.top().first,pq.top().second});
                    pq.pop();
                }
                asd.push_back({pos,pq.top().second});
                a[pos]=Ceil(Max,pq.top().first);
                pq.push({Ceil(Max,pq.top().first),pos});
                for (int i = 0; i < temp.size(); i++)
                {
                    pq.push(temp[i]);
                }
                
            }
            cout<<ans<<endl;
            for (int i = 0; i < asd.size(); i++)
            {
                cout<<asd[i].first+1<<" "<<asd[i].second+1<<endl;
            }
        }
        
        
        
    }
}