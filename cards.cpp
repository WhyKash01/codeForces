#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string cards;
    cin>>cards;
    int zcount=0;
    int ncount=0;
    for(int i=0;i<n; i++){
        if(cards[i]=='z'){
            zcount++;
        }
        else if(cards[i]=='n'){
            ncount++;
        }
    }
    for (int i = 0; i < ncount; i++)
    {
        cout<<1<<" ";
    }
    for (int i = 0; i < zcount; i++)
    {
        cout<<0<<" ";
    }
}