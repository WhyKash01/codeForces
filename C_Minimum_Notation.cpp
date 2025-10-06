#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

ll M = 1000000007;

bool comp(int a, int b) {
    return a > b;
}

int Ceil(int x, int y) {
    return ceil(static_cast<double>(x) / y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        string z=s;
        int n=s.size();
        unordered_map<char,int>m;
        unordered_map<char,vector<int>>v;
        for (int i = 0; i < n; i++)
        {
            v[s[i]].push_back(i);
            m[s[i]]=i;
        }
        sort(s.begin(),s.end());
        int Max=m[s[0]];
        string ans;
        ans.push_back(s[0]);
        int cnt=0;
        for (int i = 1; i < n; i++)
        {
            if(s[i]==s[i-1]){
                cnt++;
                if(v[s[i]][cnt]>=Max||z[Max]==s[i]){
                    ans.push_back(s[i]);
                }
                else{
                    (s[i]=='9')?ans.push_back(s[i]):ans.push_back(s[i]+1);
                }
            }
            else{
                cnt=0;
                if(v[s[i]][cnt]>=Max||z[Max]==s[i]){
                    ans.push_back(s[i]);
                }
                else{
                    (s[i]=='9')?ans.push_back(s[i]):ans.push_back(s[i]+1);
                }
            }
            if(s[i]!=s[i+1]){
                Max=max(Max,m[s[i]]);
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}
