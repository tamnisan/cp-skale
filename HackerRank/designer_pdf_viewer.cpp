#include <bits/stdc++.h>
using namespace std;
 int main(){
    
    int m[26];
    for(int i=0;i<26;i++){
        int k;
        cin>>k;
        m[i]=k;
        
          
    }  
    string c;
    cin>>c;
    vector<int > lo;
    int no,po;
    for( char n:c){
        
        no=int(n)-int( 'a');
        po=m[no];        
        lo.push_back(po)  ;
        
        }
        sort(lo.begin(),lo.end());
      int  pro=c.size()*lo.at(c.size()-1);
      cout<<pro;
 }
