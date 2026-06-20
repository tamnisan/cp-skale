#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long int> f;
    for(int i=0;i<n;i++){
        long long int m;
        cin>>m;
        f.push_back(m);
        
        
        
    }
    long long int no=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            long long int m=f.at(i)+f.at(j);
            if(m%k==0){
                no+=1;
            }
            
            else{
                continue;
            }
            
            
        }
        
        
    }
    
    cout<<no;
    
}
