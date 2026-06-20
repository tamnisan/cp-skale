#include <bits/stdc++.h>
using namespace std;

int main(){
        
    vector<int> s;
    vector<int> j;
    int a =0 ;
    int b =0;
    for(int i=0;i<3;i++){
          int m;
          cin >> m;
          s.push_back(m);


    }
    
    for(int i=0;i<3;i++){
          int m;
          cin >> m;
          j.push_back(m);


    }
    for(int i=0;i<3;i++){
        if(s[i]>j[i]){
            a+=1;
        }
        else if(s[i]<j[i]){
            b=b+1;
            
            
            
            
        }
        else{
            
            continue;
            
        }
        
        
    }
    
       cout<< a <<" " << b << endl;
    


      
}
