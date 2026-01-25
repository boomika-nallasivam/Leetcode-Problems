#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        int bestNum = l;
        int bestDiff = -1;

        for (int x = l; x <= r; x++) {
            int n = x;
            int mn = 9, mx = 0;

            while (n > 0) {
                int d = n % 10;
                mn = min(mn, d);
                mx = max(mx, d);
                n /= 10;
            }

            int diff = mx - mn;
            if (diff > bestDiff) {
                bestDiff = diff;
                bestNum = x;
            }

            if (bestDiff == 9) break;
        }

        cout << bestNum << "\n";
    }
    return 0;
}
