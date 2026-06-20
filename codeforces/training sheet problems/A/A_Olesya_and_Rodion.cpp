#include <bits/stdc++.h>
using namespace std;

// The most famous Type Aliases
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


// int n ;
// cin>>n;
// vi v(n);
// for(auto& i:v) cin>>n;


// The most famous Macros
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = a; i < b; ++i)

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {

    double n,t;
    cin>>n>>t;
    double f=1;
    
    if(t!=10 ){
        cout<<t;
         for(int i=0;i<n-1;i++){
          cout<<0;
      }

     
        
        
    }else if(n==1&&t==10){
        cout<<-1;
    }else{
           

     
        cout<<t;
        for(int i=0;i<n-2;i++){
        cout<<0;
      }

    }
}

int main() {
    fast_io();

        solve();
    
    return 0;
}