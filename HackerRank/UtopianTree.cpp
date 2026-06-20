#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    vector<int> b;
    for(int i=0;i<t;i++) {
        int m;
        cin>>m;
        b.push_back(m);
        
        
        
    }  
    
    int ho=1;
    for(int u:b){
        
        
        if(u==0){
            
            ho=1;}
        else{
            for(int i=0;i<u;i++){
                if(i%2==0){
                    ho*=2;
                    
                }
                else{
                    
                    ho+=1;
                    
                }
                
                
            }
            
            
        }
        cout<<ho<<endl;
        ho=1;
    } 
}
