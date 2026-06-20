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
    int n;
    cin>>n;
    vi v;
    int s=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a!=b){
            cout<<"rated";
            s=1;
            break;
        }
        v.push_back(a);
       
        }
        if(s==0){
        vi o(v);
        sort(all(o),greater<int>());
        if(v==o){
         cout<<"maybe";
            
        }else{
            cout<<"unrated";
        }

    }}
    


int main() {
    fast_io();

        solve();
    
    return 0;
}