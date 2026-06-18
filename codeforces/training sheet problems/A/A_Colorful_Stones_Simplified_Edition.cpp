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
    string s , g;
    cin>>s>>g;
    int idx=0;
    for(const auto& i:g){

        if(s[idx]==i) idx++;


    }
    cout<<idx+1;

}

int main() {
    fast_io();

        solve();
    return 0;
}