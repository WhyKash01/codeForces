#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin>>s;
    int count=0;
    for (int i = 0; i < s.size()-1; i++)
    {
        cout<<s[i];
        if(s[i]==s[i+1]&&count==0){
            char a=s[i]+1;
            if(s[i]=='z'){
                a='a';
            }
            cout<<a;
            count++;
        }
        
    }
    if(count==0){
        char b=s[s.size()-1]+1;
        if(s[s.size()-1]=='z'){
            b='a';
        }
        cout<<s[s.size()-1]<<b<<endl;
    }
    else{
        cout<<s[s.size()-1]<<endl;
    }
  }
}