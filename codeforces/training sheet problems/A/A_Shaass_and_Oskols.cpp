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
    vi a(n);
    for(auto& i:a) cin>>i;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        if(x-2>=0){
            a[x-2]+=y-1;
        }
        if(x<=n){

            a[x]+=(a[x-1]-y);
        }
        a[x-1]=0;
    }
    for(const auto& i:a){
        cout<<i<<"\n";
    }
}

int main() {
    fast_io();

        solve();
    
    return 0;
}