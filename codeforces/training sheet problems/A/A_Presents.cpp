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
vi van(n,0);
for(int i=1;i<=n;i++){
    int m;
    cin>>m;
    van[m-1]=i;


}
for(const auto& i:van) cout<<i<<" ";

    
}

int main() {
    fast_io();

        solve();
    
    return 0;
}