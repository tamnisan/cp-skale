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
        vector<int>  mm;
    int n;
    cin>>n;
    vector<int>   g;
    for(int j=0;j<n;j++){

        int m;
        cin>>m;
        g.push_back(m);
    }

    sort(g.begin(),g.end());
    int k=g.back()+1;
    for(int a:g){

        int cc=k-a;
        mm.push_back(cc);
        


    }

    sort(mm.begin(),mm.end());
    cout<<mm.back()<<endl;
    g.clear();
    mm.clear();
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}