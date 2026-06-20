#include <bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> a;
    vector<int> b;
    vector<int> c;
    
    for(int i=0;i<2;i++){
        int m;
        cin>>m;
        a.push_back(m);
    }
     for(int i=0;i<2;i++){
        int m;
        cin>>m;
        b.push_back(m);
    }
      for(int i=0;i<2;i++){
        int m;
        cin>>m;
        c.push_back(m);
    }
    vector<int> d;
    vector<int> e;
    
for(int i=0;i<c.at(0);i++){
    int m;
    cin>>m;
    d.push_back(m);
}

for(int i=0;i<c.at(1);i++){
    int m;
    cin>>m;
    e.push_back(m);
}


vector<int> la;
vector<int> ba;
for(int f:d){
    int m=f+b.at(0);
    la.push_back(m);
    
}
for(int f:e){
    int m=f+b.at(1);
    ba.push_back(m);
    
}
int mo,uo=0;
for(int i=0;i<c.at(0);i++){
    if(a.at(0)<=la.at(i) && la.at(i)<=a.at(1)){
        mo+=1;
        
        
    }
    else{
        
        continue;
    }
    
}
for(int i=0;i<c.at(1);i++){
    if(a.at(0)<=ba.at(i) && ba.at(i)<=a.at(1)){
        uo+=1;
        
        
    }
    else{
        
        continue;
    }
    
}


    
cout<<mo<<endl<<uo;
    
}
