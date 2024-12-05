#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        unordered_map<int,pair<int,int>> m;
        int count=0,curr,temp=0;
        for (int i = 0; i < n; i++)
        {
            if(m[a[i]].first==0){
                count=1;
                curr=a[i];
                m[a[i]].first++;
            }
            else if(curr==a[i]){
                count++;
                m[a[i]].first=max(m[a[i]].first,count);
            }
            else{
                count=1;
                curr=a[i];
            }
        }
        count=0,curr,temp=0;
        for (int i = 0; i < n; i++)
        {
            if(m[b[i]].second==0){
                count=1;
                curr=b[i];
                m[b[i]].second++;
            }
            else if(curr==b[i]){
                count++;
                m[b[i]].second=max(m[b[i]].second,count);
            }
            else{
                count=1;
                curr=b[i];
            }
        }
        int Max=0;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            int x=(*i).second.first+(*i).second.second;
            Max=max(x,Max);
        }
        cout<<Max<<endl;
        t--;
    }
}