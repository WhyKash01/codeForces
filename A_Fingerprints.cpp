#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int seq[n];
    int fin[m];
    for (int i = 0; i < n; i++)
    {
        cin>>seq[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>fin[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(seq[i]==fin[j]){
                cout<<seq[i]<<" ";
            }
        }
        
    }
    
}