#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 string s;
 cin >> n ;
 cin.ignore();
 
 getline (cin,s);
 
stringstream ss(s);
int num,sum=0;

while(ss>>num){
    sum+=num;
}
      
 

cout << sum << endl;



}
