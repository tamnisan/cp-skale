#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int> l;
    for(int i=0;i<n;i++){
        
        
        int m;
        cin>>m;
        l.push_back(m);
            
    }
    
    sort(l.begin(),l.end());
    for(int m:l ){
        cout<<m<<" ";        
        
    }  
    
}
