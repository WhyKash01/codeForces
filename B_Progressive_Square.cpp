#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t ;
    cin>>t;
    while(t--){
        ll n,b,c,x=1,k=1;
        cin>>n>>b>>c;
        map<ll,ll>m;
        ll arr[n*n];
        for(int i=0 ;i<n*n ;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n*n);
        for(int i=0 ;i<n;i++){
            for(int j=0 ;j<n ;j++){
                 x=(i*b)+(j*c)+arr[0];
                 m[x]++;
            }
        }
        bool ok=1;
        for(int i=0 ;i<n*n ;i++){
            if(m[arr[i]]==0)ok=0;
            m[arr[i]]--;
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     
        
        
    }
    return 0;
}