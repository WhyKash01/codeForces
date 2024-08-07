#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        long long first_k=k*(k+1)/2;
        long long last_k=(n*(n+1)/2)-((n-k)*((n-k)+1)/2);
        
        if(x>=first_k&&x<=last_k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}