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
        int n;
        cin>>n;
        string s,t="1";
        cin>>s;
        t+=s;
        ll ans=0;
        for (int i = 1; i <= n; i++)
        {
            int cnt=0;
            if(t[i]=='2'){
                cnt++;
                for (int j = i*(cnt+1); j <= n; j+=i)
                {
                    if(t[j]=='0'){
                        t[j]='2';
                        cnt++;
                    }
                    else if(t[j]=='2'){
                        continue;
                    }
                    else{
                        break;
                    }
                }
                ans+=i*(cnt-1);
            }
            else if(t[i]=='0'){
                
                cnt++;
                for (int j = i*(cnt+1); j <= n; j+=i)
                {
                    if(t[j]=='0'){
                        t[j]='2';
                        cnt++;
                    }
                    else if(t[j]=='2'){
                        continue;
                    }
                    else{
                        break;
                    }
                }
                ans+=i*cnt;
            }
        }
        cout<<ans<<endl;
    }
}
