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
        int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c=0;
    while(c<n-k){
      if(s[c]=='1'){


        
        int q=c+k;
       

            s[c]='0';
        

        if(s[q]=='0'){

            s[q]='1';
        }else{

            s[q]='0';
        }
        
        

      }
       
c++;

    }

    int count=0;
    for(char co:s){

        if(co=='1'){

            cout<<"NO"<<endl;
            break;
            
        }else{
            count++;

        }


    }

    if (count==n){

        cout<<"YES"<<endl;
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