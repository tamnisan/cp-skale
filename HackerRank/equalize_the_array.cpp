#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int> ji;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        ji.push_back(m);
               
    }
    vector<int> li;
    vector<int>  hi;
    while(ji.size()>0){
        int m=1;
        
        for(int i=0;i<ji.size();i++){
            li.clear();
             li.push_back(i);
            for(int j=i+1;j<ji.size();j++){
               
                if(ji.at(i)==ji.at(j)){
                    m+=1;
                    
                    li.push_back(j);
                    
                }
                else{
                    continue;
                }
                
                
                
            }
            sort(li.rbegin(),li.rend());
            for(int b:li){
                
                ji.erase(ji.begin()+b);
                
            }
            
            hi.push_back(m);
            break;
            
            
        }
        
        
        
    }
    int sum=0;
    sort(hi.begin(),hi.end());
    for(int i=0;i<hi.size()-1;i++){
        sum+=hi.at(i);
           
    }
    cout<<sum;
}
