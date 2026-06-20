#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string h= s.substr(8,9);
    string j=s.erase(8);
    string f=s.substr(0,2);
    if(h=="AM"){
        if(f=="12"){
            cout<<j.replace(0,2,"00");
            
        }
        else{
            cout<<j;
        }
        
    }
    else{
        if(f=="12"){
            
            cout<<j;
            
        }
        else{
            
            if (j.substr(0,1)=="0") {
                int m= stoi(j.substr(1,2));
                m=m+12;
                string n= to_string(m);
                cout<<j.replace(0,2,n);
                
                
                
            
            }
            else{
                   int m=stoi(f);
            
             m=m+12;
             string n=to_string(m);
             cout<<j.replace(0,2,n);
            }
         
            
        }
        
        
        
    }
    
    
    
}
