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
        int n;
        cin>>n;
        string s="aeiou";
        char ans[n];
        int ptr=n/5,count=n%5,x=0;
        int i=0;
        while(i<n){
            if(count>0){
                for (int j = 0; j < ptr+1; j++)
                {
                    ans[i]=s[x];
                    i++;
                }
                count--;
                x++;
            }
            else{
                for (int j = 0; j < ptr; j++)
                {
                    ans[i]=s[x];
                    i++;
                }
                x++;
            }
        }
    
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i];
        }
        
        cout<<endl;
    }
}