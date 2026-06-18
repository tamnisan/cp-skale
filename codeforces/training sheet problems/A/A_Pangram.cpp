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
    string s;
    cin>>s;
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return std::toupper(c);
    });
    set<char> ss;
    if(n>=26){

        for(char i:s){
            ss.insert(i);
        }
        if(ss.size()==26){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }else{
        cout<<"NO";
    }
    
}

int main() {
    fast_io();

        solve();
    
    return 0;
}