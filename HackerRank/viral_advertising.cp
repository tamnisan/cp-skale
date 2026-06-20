#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int m=5;
    for(int i=0;i<n;i++){
        int h=floor(m/2);
        sum+=h;
        m=h*3;
        
    }
    cout<<sum;
    
}
