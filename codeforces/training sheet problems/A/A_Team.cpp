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
    int sol=0;
    while(n--){

        int p,q,r;
        cin>>p>>q>>r;
        if((p&&q)||(p&&r)||(q&&r)){

            sol++;
        }



    }
    cout<<sol;
    
}

int main() {
    fast_io();
    
        solve();
    
    return 0;
}