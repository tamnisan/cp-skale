  #include <bits/stdc++.h>
  using namespace std;
  int main(){
    
    
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
    int n,k;
    cin>>n>>k;
    vector<int> b;
    for(int j=0;j<n;j++){
        int m;
        cin>>m;
        b.push_back(m);    
    }
     sort(b.begin(),b.end());
     int s=0;
     for(int h:b){
        if(h<=0){
            
            s+=1;
        }
        else {
        continue;
        }
        
        
        
     }
     if(s>=k){
        cout<<"NO"<<endl;
        
     }
     else{
        cout<<"YES"<<endl;
        
     }
     b.clear();
    
   }
    
    
  }
