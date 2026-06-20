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
    set<int> ss;
    for(int i=1;i<=n;i++){
        ss.insert(i);

    }
    set<int> s;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int n;
        cin>>n;
        s.insert(n);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int n;
        cin>>n;
        s.insert(n);
    }
    if(ss==s){
        cout<<"I become the guy.";
    }else{

        cout<<"Oh, my keyboard!";
    }



}

int main() {
    fast_io();

        solve();
    
    return 0;
}