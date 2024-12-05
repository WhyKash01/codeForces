#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
bool sortbysec(const pair<int,int> &a,
            const pair<int,int> &b)
{
    return (a.second < b.second);
}
int computeXOR(int n) 
{ 
  if (n % 4 == 0) 
    return n; 
  
  if (n % 4 == 1) 
    return 1; 
  
  if (n % 4 == 2) 
    return n + 1; 
  
  return 0; 
} 
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int x=computeXOR(a-1);
        
        if(b==x){
            cout<<a<<endl;
        }
        else{
            int ans=x^b;
            if(ans==a){
                cout<<a+2<<endl;
            }
            else{
                cout<<a+1<<endl;
            }
        }
    }
    return 0;
}