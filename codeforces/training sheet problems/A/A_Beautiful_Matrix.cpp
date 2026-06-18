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
    int col=0;
    int row=0;

    for(int i=0;i<5;i++){

                int n;

            for(int j=0;j<5;j++){

                
                cin>>n;

            col++;
            if(n==1){
                break;
            }
        }

        row++;
        if(n==1) break;
        col=0;
    }

    

    cout<<(abs(3-col)+abs(3-row));
    
}

int main() {
    fast_io();
     solve();
    return 0;
}