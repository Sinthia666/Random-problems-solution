#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; int k;
        cin >> n; cin >> k;
        int count = 0;
        for(int i = 1; i<= n; ++i)  {
            for(int j = i+1; j<=n ; j++ ) {
                int bit_and = i & j;
                if(bit_and < k and count < bit_and) {
                    count = bit_and;
                }
            }
        }
        cout << count << endl;
    }
}