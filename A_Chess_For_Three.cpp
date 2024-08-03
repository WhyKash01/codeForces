#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int count = 0;
            bool flag = true;
            for (int i = 0; i < a; i++)
            {
                if (flag&& c>b)
                {
                    c--;
                    count++;
                }
                else if(flag){
                    c--;
                    count++;
                    flag = false;
                }
                else
                {
                    b--;
                    flag = true;
                    count++;
                }
            }
            if(b>c){
                count=count+c;
            }
            else{
                count=count+b;
            }

            cout << count << endl;
        }
        t--;
    }
}