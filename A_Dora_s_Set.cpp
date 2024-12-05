#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int l,r;
        cin>>l>>r;
        int total=r-l+1;
        int count=0;
        for (int i = l; i <= r; i++)
        {
            if(isPrime(i)){
                count++;
            }
        }
        int odd;
        if(total%2!=0&&l%2!=0){
            odd=total/2+1;
        }
        else{
            odd=total/2;
        }
        if(l>2){
            odd=odd-count;
        }
        else{
            count--;
            odd=odd-count;
        }
        cout<<(count+odd)/2<<endl;
        
        t--;
    }
}