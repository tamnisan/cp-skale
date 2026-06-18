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
    while(cin>>n && n!=0){
        int sm=0;
        for(int i=1; i<=n;i++){
            if(n%i==0){
                sm++;
            }
        }
        if(sm%2==0){
            cout<<"no"<<"\n";
        }else{

            cout<<"yes"<<"\n";
        }
        
    }
}

int main() {
    fast_io();

        solve();
    return 0;
}