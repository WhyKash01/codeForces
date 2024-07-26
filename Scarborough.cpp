#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    string main;
    cin>>n>>m>>main;
    int l, r;
    char c1, c2;
    for (int i = 0; i < m; i++)
    {
        cin>>l>>r>>c1>>c2;
        for (int i = l-1; i <= r-1; i++)
        {
            if(main[i]==c1){
                main[i]=c2;
            }
        }
    }
    cout<<main;
}