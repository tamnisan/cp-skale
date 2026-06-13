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
    
    ll a,b,x;
    // int stp=0;

    cin>>a>>b>>x;
    // if(a==b){
    //     cout<<stp<<"\n";
    // }else{

        vector<pair<ll,int>>  ao;
         vector<pair<ll,int>>  bo;
         vi fo;
         int coa=0;
         int cob=0;
         ao.push_back({a,coa});
        bo.push_back({b,cob});
        while(a){
            a=a/x;
            coa++;
            ao.push_back({a,coa});

        }

        while(b){

            b=b/x;
            cob++;
            bo.push_back({b,cob});
        }
        for(const auto& g:ao){

            for(const auto& h:bo){

                fo.push_back(abs(g.first-h.first)+(g.second+h.second));
            }


        }

        sort(all(fo));
        cout<<fo.front()<<"\n";






    // }



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