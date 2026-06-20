#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> s;
    for(int i=0;i<n;i++){
        int m;
        cin>> m;
        s.push_back(m);
        
        
    }
    
    for(int g:s){
        
        if (g<=10) {
            cout<<g<<endl;
        
        }
        else {
            
             string j =to_string(g);
        string k=j.substr(1);
        int y=stoi(k);
        
        if (g<38 ){
            
            
            cout<<g<<endl;
        }
        else if( y>5){
            int a =abs(10-y);
              if(a<3){
                
                
                cout<<g+a<<endl;
            }
            else {
            
            cout<<g<<endl;
            
        }
        }
        else{
            if(y-5==0){
               cout<<g<<endl;
                
                
            }
            else if(abs(y-5)<3){
                
                int a=abs(y-5);
                cout<<g+a<<endl;
            }
            else {
            
            cout<<g<<endl;
            } 
            // else if(y-5<0){
            //     cout<<g
                
                
            // }
            // else {
            
            
            
            
        }
        
        
        
        
    }
            
            
        }
       
    
    
    
}
