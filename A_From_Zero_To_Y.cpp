#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x>>y;
        int k=0;
        int count=0;
        while(k!=y){
            if(y-k<x){
                count+=y-k;
                k=y;
                break;
            }
            else{
                int curr=x;
                while((y-k)>=curr*10){
                    curr*=10;
                }
                k+=curr;
                count++;
            }
        }
        cout<<count<<endl;
    }
}