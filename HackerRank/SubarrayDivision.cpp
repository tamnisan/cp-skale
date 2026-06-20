#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int> j;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        j.push_back(m);
        
        
        
    }
    
    int d,m;
    cin>>d>>m;
    int ls=0;
    // no of elements to take is equal to month
    if(n-m==0){
        int ka=0;
        for(int i=0;i<n;i++){
            ka+=j.at(i);
        }
        if(ka==d){
            ls+=1;
        }
        
    }
    else{
         for(int i=0;i<=n-m;i++){
        int da=0;
        for(int q=i;q<i+m;q++){
            da+=j.at(q);
        }
        if(da==d){
            ls+=1;
            
        
        }
        
        
        
    }
    
        
    }
   
    cout<<ls;
    }
