#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int mtx[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int y;
            cin >> y;
            mtx[i][j]=y;
            
            
        }
        
        
    }
    int suml=0;
    int sumr=0;
    for(int i=0;i<n;i++){
        suml+=mtx[i][i];
        
        
    }
    
    for(int i=0;i<n;i++){
            sumr+=mtx[i][(n-1)-i];
            
        }
    int d= suml-sumr;
    cout << abs(d);
        
    
    
    
}
