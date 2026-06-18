#include <bits/stdc++.h>
using namespace std;

// The most famous Type Aliases
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

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
    int n;
    cin>>n;
    vi v(n);
    for(auto& i:v) cin>>i;
    for(int i=0;i<n;i++){

        if (i==0){
            
            int mi=min(abs(v[i]-v[i+1]),abs(v[i]-v[n-1]));
            int ma=max(abs(v[i]-v[i+1]),abs(v[i]-v[n-1]));
            cout<<mi<<" "<<ma<<"\n";


        }else if(i==n-1){

              
            int mi=min(abs(v[i]-v[0]),abs(v[n-2]-v[n-1]));
            int ma=max(abs(v[i]-v[0]),abs(v[n-2]-v[n-1]));
            cout<<mi<<" "<<ma<<"\n";
        }else{
          
             
            int mi=min(min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1])),max(abs(v[i]-v[n-1]),abs(v[i]-v[0])));
            int ma=max(min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1])),max(abs(v[i]-v[n-1]),abs(v[i]-v[0])));
            cout<<mi<<" "<<ma<<"\n";
        }
    }
}

int main() {
    fast_io();

        solve();
    
    return 0;
}