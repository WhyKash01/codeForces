#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long 
#define MOD 1000000007
#define int long long
const int T=1e4+10;
#define pii pair<int,int>
#define ppii pair<pii,int>
#define MOU 998244353





int fill(int c1,int c2,int c3,int s1,int s2,int s3,int s4){

  int arr[4]={s1,s2,s3,s4};
  stack<int>colours;
  colours.push(c3);  colours.push(c2);  colours.push(c1);


  int cost=0;
  for(int i=0;i<4;i++){
    int curr=colours.top();
    colours.pop();
    if(arr[i]>curr){
      cost++;
      arr[i]=arr[i]-curr;
      curr=colours.top();
      colours.pop();
    }
    else{
      cost++;
      if((curr-arr[i])>0){
        colours.push(curr-arr[i]);
      }
      continue;
    }


    if(arr[i]>curr){
      cost++;
      arr[i]=arr[i]-curr;
      curr=colours.top();
      colours.pop();
    }
    else{
      cost++;
      if((curr-arr[i])>0){
        colours.push(curr-arr[i]);
      }
      continue;
    }



    if(arr[i]>curr){
      cost++;
      arr[i]=arr[i]-curr;
      curr=colours.top();
      colours.pop();
    }
    else{
      cost++;
      if(curr-arr[i]>0){
        colours.push(curr-arr[i]);
      }
      continue;
    }



  }

  return cost;



}



void solve (){
int l;
cin>>l;
int w;
cin>>w;

int r,g,b;
cin>>r>>g>>b;


// fill(l,l,w,w) fill(l,w,l,w) fill(w,l,w,l) fill(w,w,l,l)
int ans=1e9;
for(int i=1;i<=6;i++){
    if(i==1){
      int curr=min({fill(r,g,b,l,l,w,w) ,fill(r,g,b,l,w,l,w) ,fill(r,g,b,w,l,w,l), fill(r,g,b,w,w,l,l)});
      ans=min(ans,curr);
    }
    else if(i==2){
     int curr=min({fill(r,b,g,l,l,w,w) ,fill(r,b,g,l,w,l,w) ,fill(r,b,g,w,l,w,l), fill(r,b,g,w,w,l,l)});
      ans=min(ans,curr);
    }
    else if(i==3){
     int curr=min({fill(g,r,b,l,l,w,w) ,fill(g,r,b,l,w,l,w) ,fill(g,r,b,w,l,w,l), fill(g,r,b,w,w,l,l)});
      ans=min(ans,curr);
    }
    else if(i==4){
     int curr=min({fill(g,b,r,l,l,w,w) ,fill(g,b,r,l,w,l,w) ,fill(g,b,r,w,l,w,l), fill(g,b,r,w,w,l,l)});
      ans=min(ans,curr);
    }
    else if(i==5){
     int curr=min({fill(b,r,g,l,l,w,w) ,fill(b,r,g,l,w,l,w) ,fill(b,r,g,w,l,w,l), fill(b,r,g,w,w,l,l)});
      ans=min(ans,curr);
    }
    else{
     int curr=min({fill(b,g,r,l,l,w,w) ,fill(b,g,r,l,w,l,w) ,fill(b,g,r,w,l,w,l), fill(b,g,r,w,w,l,l)});
      ans=min(ans,curr);
    }
}

cout<<ans<<endl;


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