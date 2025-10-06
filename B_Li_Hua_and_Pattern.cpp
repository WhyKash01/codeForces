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
ll calc(vector<int>& a) {
    ll zeroes = 0, ans = 0;
    for(int i = a.size() - 1; i >= 0; --i) {
        if(a[i] == 0) ++zeroes;
        else ans += zeroes;
    }
    return ans;
}
// bool checkInvert(int n,vector<vector<int>> a){
//     for (int i = 0; i < n/2; i++)
//     {
//         reverse(a[n-i-1].begin(),a[n-i-1].end());
//         vector<int>x=a[n-i-1];
//         if(x!=a[i]){
//             return false;
//         }
//     }
//     if(n%2!=0){
//         for (int i = 0; i < n/2; i++)
//         {
//             if(a[n/2+1][i]!=a[n/2+1][n-i-1]){
//                 return false;
//             }
//         }
        
//     }
//     return true;
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<vector<int>>a(n,vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
        }
        int count=0;
        for (int i = 0; i < n/2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(a[i][j]!=a[n-i-1][n-j-1]){
                    count++;
                }
            }
            
        }
        if(n%2!=0){
        for (int i = 0; i < n/2; i++)
        {
            
            if(a[n/2][i]!=a[n/2][n-i-1]){
                count++;
            }
        }
        
    }
        
        if(n==1||(count<=k&&(k-count)%2==0)||(count<=k&&n%2==1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}