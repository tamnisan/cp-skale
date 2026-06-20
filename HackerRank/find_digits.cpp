

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long int n;
        cin >> n;
        string s = to_string(n);
        int m = 0;
        for (char d : s) {
            int digit = d - '0'; // direct conversion
            if (digit == 0){continue;} // skip zero to avoid division by zero
            if (n % digit == 0) {
                m += 1;
            }
        }
        cout << m << endl;
    }
}
