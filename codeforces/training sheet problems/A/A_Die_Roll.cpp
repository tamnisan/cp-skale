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
    int y,w;
    cin>>y>>w;


        int j=max(y,w);
        int m=6-j+1;
        int gcd;
        for(int i=1;i<=m;i++){
            if(m%i==0 && 6%i==0){
                gcd=i;
            }

        }
        int A=m/gcd;
        int B=6/gcd;
        cout<<A<<"/"<<B;


    
}

int main() {
    fast_io();
 
        solve();
    
    return 0;
}