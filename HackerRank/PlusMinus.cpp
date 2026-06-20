#include <bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin>>n;
    vector<int> s;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        s.push_back(m);
        
        
        
        
    }
    float pos=0;
    float z=0;
    float neg=0;
    for(int n:s){
        if(n>0){
            pos+=1;
        }
        else if(n==0){
            z+=1;
        }
        else{
            neg+=1;
        }
        
       
            
        
    }

    
        float a=pos/n;
        float b =z/n;
        float c=neg/n;
       
        cout << fixed << setprecision(6)<<a<<endl;
        cout << fixed << setprecision(6)<<c<<endl;
        cout << fixed << setprecision(6)<<b<<endl;
        
    
    
    
}
