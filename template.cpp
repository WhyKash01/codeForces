#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
long long power(long long a, long long b) {
    long long result = 1;
    while(b) {
        if (b & 1) 
        result = (result * a);
        a = (a * a);
        b >>= 1;
    }
    return result;
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
int main(){
    int t;
    cin>>t;
    while(t>0){
        
        t--;
    }
}