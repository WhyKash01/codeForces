#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        char arr[n][k];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        int count=0;
        int max=0;
        int x,y,flag=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if(arr[i][j]=='#' &&flag==0){
                    x=i+1;
                    y=j+1;
                    count++;
                    flag=1;
                }
                else if(arr[i][j]=='#'){
                    count++;
                }
            }
            if(count>max){
                max=count;
                
            }
            count=0;
        }
        cout<<x+max/2<<" "<<y<<endl;
        t--;
    }
}