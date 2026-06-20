#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int> h;
    for(int i=0;i<q;i++){
          for(int j=0;j<3;j++){
            
            int m;
            cin>>m;
            h.push_back(m);
            
            
          }        
          int so=abs(h.at(0)-h.at(2));
          int mo=abs(h.at(1)-h.at(2));
          if(so==mo){
            cout<<"Mouse C"<<endl;;
          }
          else{
            
            if (so<mo) {
                cout<<"Cat A"<<endl;
            
            }
            else{
                cout<<"Cat B"<<endl;
                
            }
            
          }
      h.clear();  
    }
    
    
}
