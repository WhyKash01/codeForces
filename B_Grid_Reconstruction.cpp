#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[2][n];
        int end=2*n;
        a[1][n-1]=end;
        a[0][0]=end-1;
        int oddstart=1,oddend=end-3,evenstart=2,evenend=end-2;
        for (int i = 1; i < n; i++)
        {
            if(i%2==0){
                a[0][i]=oddend;
                oddend-=2;
            }
            else{
                a[0][i]=oddstart;
                oddstart+=2;
            }
        }
        for (int i = 0; i < n-1; i++)
        {
            if(i%2==0){
                a[1][i]=evenstart;
                evenstart+=2;
            }
            else{
                a[1][i]=evenend;
                evenend-=2;
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
    }
}