/**
 🍪 the_hyp0cr1t3
 🍪 13.11.2020 21:08:42
**/
#ifdef W
#include "k_II.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()

const int64_t DESPACITO = 2e18;
const int INF = 2e9, MOD = 1e9+7;
const int N = 2e5 + 5;

int simPforPolyphia() {
    int i, n;
    cin >> n;
    set<int> s;
    for(i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
    } cout << (sz(s) == n? "NO" : "YES") << '\n';

    return 0;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int Q; for(cin >> Q; Q; Q--) simPforPolyphia();
} // ~W