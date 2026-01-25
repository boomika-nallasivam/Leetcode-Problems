#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long x = llabs(a[0]);
        int S = 0;

        for (int i = 1; i < n; i++) {
            if (llabs(a[i]) < x) S++;
        }

        if (S <= n / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
