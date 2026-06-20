#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int s[5];
    for(int i=0;i<5;i++){
        long long int m;
        cin>>m;
        s[i]=m;
        
        
    }
    long long int n=s[0];
    for(int i=0;i<4;i++){
        if(n>s[i+1]){
         continue;   
            
        }
        else{
            
            n=s[i+1];
            
        }
        
        
    }
    long long int v=s[0];
    
     for(int i=0;i<4;i++){
        if(v<s[i+1]){
         continue;   
            
        }
        else{
            
            v=s[i+1];
            
        }
        
        
    }
    
long long int sum=0;
for(int g:s){
    sum+=g;
    
}
    cout<<sum-n<<" "<<sum-v;
    
}
