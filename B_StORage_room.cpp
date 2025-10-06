#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long 
#define MOD 1000000007
#define int long long
const int T=2*1e5+10;
#define pii pair<int,int>
 
 
 
void solve (){
int x;
cin>>x;
int arr[x][x];
 
 
vector<int>ret;
for(int i=0;i<x;i++){
   int ans=(1ll<<30) -1;
   for(int j=0;j<x;j++){
      cin>>arr[i][j];
      if(i!=j){
ans=ans&arr[i][j];
      }
   }
   ret.push_back(ans);
}
 
 
for(int i=0;i<x;i++){
   for(int j=0;j<x;j++){
      if(i==j)
      continue;
      if(( ret[i] | ret[j] )!=arr[i][j]){
cout<<"NO"<<endl;
return;
      }
   }
}
 
cout<<"YES"<<endl;
for(auto rr: ret)
cout<<rr<<" ";
cout<<endl;
 
 
 
 
}
 
 
 
 
int32_t main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int tt;
    cin>>tt;
 
 
for(int o=1;o<=tt;o++){
solve();
} 
	return 0;
}