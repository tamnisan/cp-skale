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
    ll n ,k;
   cin>>n>>k;
   if(n%2==0){
if(n/2>=k){
    cout<<(k*2)-1;
}else{
    
    cout<<(k-n/2)*2;


}}else{
if((n/2)+1>=k){
    cout<<(k*2)-1;
}else{
    
    cout<<(k-((n/2)+1))*2;


}

}
}
    

 
   

  
  

int main() {
    fast_io();

        solve();
    
    return 0;
}