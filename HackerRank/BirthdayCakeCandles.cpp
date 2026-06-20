#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        s.push_back(m); 
    }
    int max =*max_element(s.begin(),s.end());
    int no=0;
    for(int g:s){
        if(g==max){
            no+=1;
        }
        else{
            
            continue;
        }
        
        
        
        
        
    }
    cout<<no;
    
    
    
}
