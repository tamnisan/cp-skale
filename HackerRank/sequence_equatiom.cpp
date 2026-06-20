#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int>   l;
    vector<int >     d;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        l.push_back(m);
        d.push_back(m);
        
        
        
    }
    
    sort(d.begin(),d.end());
    for(int g:d){
        int m=1;
        int ho=1;
     for(int go:l){
        
        if(g==go){
            break;
        }
        else{
            
            m+=1;
        }     
     }
     for(int go:l){
        
        if(m==go){
            break;
        }
        else{
            
            
            ho+=1;
        }
        
            
     }
      cout<<ho<<endl;
     
         
        
    }
    
    
}


