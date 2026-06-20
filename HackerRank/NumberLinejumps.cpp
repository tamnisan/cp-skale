#include <bits/stdc++.h>
using namespace std;
int main(){
    
    vector<float> g;
    for(float i=0;i<4;i++){
        float m;
        cin>>m;
        g.push_back(m);
    }
    
    float a=((g.at(0)-g.at(2))/(g.at(3)-g.at(1)))+1;



        if(a<=0){
        cout<<"NO";
    }
        
    else{
        int b=a;
    if(b-a!=0){
        cout<<"NO";
    }
    else{
        
        cout<<"YES";
        
    }
    
        
        
    }
    
    
    // float a= 6.333;
    // int b=a;
    // cout<<a-b;
    

    
}
