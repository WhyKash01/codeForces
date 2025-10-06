#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

ll M = 1000000007;

bool comp(int a, int b) {
    return a > b;
}

int Ceil(int x, int y) {
    return ceil(static_cast<double>(x) / y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x[n];
        for (int i = 0; i < n; i++)
        {
            cin>>x[i];
        }
        for (int i = 0; i < n; i++)
        {
            int z;
            cin>>z;
            x[i]=z-x[i];
        }
        sort(x,x+n);
        int ans=0;
        int left=0,right=n-1;
        while(left<right){
            if(x[right]<0){
                break;
            }
            if(x[left]<0){
                if(-x[left]<=x[right]){
                    right--;
                    left++;
                    ans++;
                }
                else{
                    left++;
                }
            }
            else{
                left++;
                right--;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
