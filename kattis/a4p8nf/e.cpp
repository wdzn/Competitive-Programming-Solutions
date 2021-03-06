#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
#define x first
#define y second
#define all(v) v.begin(), v.end()
#define ms(v) memset(v, 0, sizeof(v))
#define mss(v) memset(v, -1, sizeof(v))
#define len(v) int(v.size())
#ifdef hy
#define fastio()
#define debug(a) cerr << #a << ": " << a << endl
#else
#define endl '\n'
#define fastio() cin.tie(0), ios::sync_with_stdio(0)
#define debug(a)
#endif

int main() {
    fastio();
    int d, a, b;
    cin >> d >> a >> b;
    for (int i = 1;; i++) {
        int j = i + d;
        int jj = j * (j + 1) / 2 - 6;
        int ii = i * (i + 1) / 2 - 3;
        if (ii + jj == a + b) {
            cout << a - jj << endl;
            return 0;
        }
    }
    return 0;
}