#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x,y;
        cin>>x>>y;
        if(x==0&&y==0){
            cout<<0<<endl;
        }
        else if((y==0&&x<=15)||(y==1&&x<=11)||(y==2&&x<=7)){
            cout<<1<<endl;
        }
        else{
            int reqy;
            if(y%2==0){
                reqy = y/2;
            }
            else{
                reqy = y/2+1;
            }
            int ans=x-(reqy*15-(y*4));
            if(ans>0){
                int reqx;
                if(ans%15==0){
                reqx = ans/15;
            }
            else{
                reqx = ans/15+1;
            }
                cout<<reqy+reqx<<endl;
            }
            else{
                cout<<reqy<<endl;
            }
        }
        t--;
    }
}