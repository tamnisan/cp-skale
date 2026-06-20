#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long int> j;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        j.push_back(m);
    }
    long long int s=j.at(0);
   
    vector<long long int>  mi;
     vector<long long int>  li;
    
    for(long long int a:j){
        if(s==a){
            continue;
        }
        else if(a>s){
            mi.push_back(a);
        }
        else{
            
            li.push_back(a);
        }
        
    }
    long long int ma,min=0;
   
    if(mi.size()!=0){
        long long int uo=mi.at(0);
       ma=1;
       for(long long int ww:mi){
        if(ww>uo){
            
            ma+=1;
            uo=ww;
        }
        else{
            continue;
        }
       }
       
    }
    
    
    if(li.size()!=0){
        long long int yo=li.at(0);
       min=1;
       for(long long int ww:li){
        if(ww<yo){
            
            min+=1;
            yo=ww;
        }
        else{
            continue;
        }
       }
       
    }
  
   
  
    
   cout << ma<<" "<<min;
}
