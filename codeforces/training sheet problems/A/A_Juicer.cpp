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
    int n,b,d;
    cin>>n>>b>>d;
    vi o(n);
    for(auto& i: o) cin>>i;
    int eo=0;
    int sum=0;
    for(const auto& i:o){
        if(i<=b){
            sum+=i;
        }if(sum>d){

            sum=0;
            eo++;
        }

    }
    cout<<eo<<"\n";
}

int main() {

        solve();
    
    return 0;
}