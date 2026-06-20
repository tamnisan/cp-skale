#include <bits/stdc++.h>
using namespace std;



//some stuff i need ha ha

// vi ham(n);
// for(auto& i:ham) cin>>i;









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
    int n,k;
    cin>>n>>k;
    vi ham(n);
    vi sam;
    for(auto& i:ham) cin>>i;
    sort(all(ham));
    int x=ham.front();
    ham.erase(ham.begin());
    for(int i=1;i<n;i++){
        int y=x+k;
        for(const auto& j:ham){
            if (j>=x && j<=y){

                sam.push_back(j);
            }


        }
        if (sam.size()==0 || sam.size()==1){
            if((i+1)%2==0){
                cout<<"NO"<<"\n";
                break;
            }else{

                cout<<"YES"<<"\n";
                break;
            }
            break;
        }else{
            if((i+1)%2==0){
                x=sam.back();
                auto it = find(all(ham), x);
                ham.erase(it);
                

            }else{

                x=sam.front();
               auto it = find(all(ham), x);
                ham.erase(it);
            }




        }

        sam.clear();



    }


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