#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=count(s.begin(),s.end(),'A');
        int b=count(s.begin(),s.end(),'B');
        int c=count(s.begin(),s.end(),'C');
        int d=count(s.begin(),s.end(),'D');
        cout<<min(a,n)+min(b,n)+min(c,n)+min(d,n)<<endl;
    }
}