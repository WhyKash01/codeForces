#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;

ll binary_expo(ll a, ll b) {
    if (b == 0) {
        return 1;
    }
    ll res = binary_expo(a, b / 2);
    if (b & 1) {
        return a * res * res;
    } else {
        return res * res;
    }
}

int ceil_div(int x, int y) {
    return ceil(static_cast<double>(x) / y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        cin>>a>>b;
        string x="";
        int z=1;
        for (int i = 0; i < a.size(); i++)
        {
            if(z==0){
                break;
            }
            for (int j = 0; j < b.size()-1; j++)
            {
                if(a[i]==b[j]&&a[i+1]==b[j+1]){
                    x.push_back(a[i]);
                    x.push_back(a[i+1]);
                    z=0;
                    break;
                }
            }   
        }
        if(x==""){
            if(a[0]==b[0]){
                cout<<"YES"<<endl;
                cout<<a[0]<<"*"<<endl;
            }
            else if(a[a.size()-1]==b[b.size()-1]){
                cout<<"YES"<<endl;
                cout<<"*"<<a[a.size()-1]<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            cout<<"*"<<x<<"*"<<endl;
        }
    }
}
