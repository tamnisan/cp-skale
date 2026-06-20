#include <bits/stdc++.h>
using namespace std;

int main(){
    int v,n;
    cin>>v>>n;
      vector<int> l;
      for(int i=0;i<n;i++){
        int m;
        cin>>m;
        l.push_back(m) ;    }
        
        for(int i=0;i<n;i++){
            
            if(l.at(i)==v){
                
                cout<<i;
            }
        }
}
