#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string gems[]={"Power","Time","Space","Soul","Reality","Mind"};
    vector<string> colour;
    vector<string> gem;
    vector<string> ans;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        colour.push_back(a);
        
    }
    int l=6;
    
    for (int i = 0; i < n; i++)
    {
        if(colour[i]=="red"){
            gem.push_back("Reality");
        }
        else if(colour[i]=="purple"){
            gem.push_back("Power");
        }
        else if(colour[i]=="yellow"){
            gem.push_back("Mind");
        }
        else if(colour[i]=="orange"){
            gem.push_back("Soul");
        }
        else if(colour[i]=="green"){
            gem.push_back("Time");
        }
        else if(colour[i]=="blue"){
            gem.push_back("Space");
        }
    }

    for (int i = 0; i < 6; i++)
    {
        bool x=false;
        for (int j = 0; j < n; j++)
        {
            
            if(gems[i]==gem[j]){
                x=true;
            }
        }
        if(x==false){
            ans.push_back(gems[i]);
        }
        
    }
    cout<<l-n<<endl;
    for (int i = 0; i < 6-n; i++)
    {
        cout<<ans[i]<<endl;
    }
    

}