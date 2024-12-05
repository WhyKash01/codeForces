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
int main()
{
    int arr[2];
    cin >> arr[0]>>arr[1];
    if(arr[1]<arr[0]){
        swap(arr[1],arr[0]);
    }
    if(arr[0]==1&&arr[1]==2){
        cout<<3<<endl;
    }
    else if(arr[0]==1&&arr[1]==3){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
}