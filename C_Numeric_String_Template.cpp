#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x;
        cin >> x;
        vector<string> s;
        for (int i = 0; i < x; i++)
        {
            string a;
            cin >> a;
            s.push_back(a);
        }

        for (int i = 0; i < x; i++)
        {
            unordered_map<char, int> map;
            map.clear();
            if (n == s[i].size())
            {
                for (int j = 0; j < s[i].size(); j++)
                {
                    if (map[s[i][j]] == 0)
                    {
                        map[s[i][j]] = arr[j];
                    }
                }
                int v[n];
                for (int k = 0; k < n; k++)
                {
                    v[k]=map[s[i][k]];
                }
                int count=0;
                for (int l = 0; l < n; l++)
                {
                    
                    if(v[l]==arr[l]){
                        count++;
                    }
                }
                unordered_map<char,int>::iterator it;
                for (int q = 0; q < n-1; q++)
                {
                    for (int w = q+1; w < n; w++)
                    {
                        if(map[s[i][q]]==map[s[i][w]]&&s[i][q]!=s[i][w]){
                            count=-1;
                        }
                    }
                }
                
                
                if(count==n){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
                
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}