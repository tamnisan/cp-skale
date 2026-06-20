 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> s;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        s.push_back(m);
        
        
    }
    
    for(int i=0;i<k;i++){
        int j= s.back();
        s.pop_back();
        s.insert(s.begin(),j);
        
 }
 
 int fo[n];
 int no=0;
 for(int g:s){
    fo[no]=g;
    no+=1;
 }
 for(int i=0;i<q;i++){
    int u;
    cin>>u;
    cout<<fo[u]<<endl;
    
    
 }
 
 
 
 
 }
