#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string a, b;
        cin >> a >> b;
        int LenA=a.length(),LenB=b.length();
        int sum=0;
        if(LenA==LenB){
            int count=LenA;
            for (int i = 0; i < LenA; i++)
            {
                if(a[i]!=b[i]){
                    
                    sum=a[i]-b[i];
                    count--;
                    if(a[i]<b[i]){
                        sum=-sum;
                    }
                    break;
                }
                else{
                    count--;
                }
            }
            
            sum=sum+count*9;
            
        }
        else{
            if(LenA<LenB){
                swap(a,b);
                swap(LenA,LenB);
            }
            sum=(a[0]-'0')+(LenA-1)*9;
        }
        cout<<sum<<endl;
        t--;
    }
}