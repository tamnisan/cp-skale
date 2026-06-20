#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<long long int> d;
    for(int i=0;i<n;i++){
        long long int m;
        cin>> m;
        d.push_back(m);
        
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=d[i];
    }
    cout<<sum<<endl;
    
}
