#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,k;
    cin>>n>>k;
    int RedReq=(2*n)%k ==0?2*n/k:2*n/k+1;
    int GreenReq=(5*n)%k ==0?5*n/k:5*n/k+1;
    int BlueReq=(8*n)%k ==0?8*n/k:8*n/k+1;
    cout<<RedReq+GreenReq+BlueReq;
}