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
    sort(all(v));
    int sm=0;
    for (int i=1;i<n-1;i++){

        if(v[i]>v[i-1] && v[i]<v[i+1]){
            sm++;

        }
        else if((v[i]==v[i+1] || v[i]==v[i-1]) && (v[i]!=v[0] && v[i]!=v[n-1])){
            sm++;
        }
    }
    cout<<sm;
}

int main() {
    fast_io();

        solve();
    return 0;
}