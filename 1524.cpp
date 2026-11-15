#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        long long pref = 0;
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            long long x;
            scanf("%lld", &x);
            pref += x;
            if (pref < (long long)i * (i + 1) / 2) ok = false;
        }
        puts(ok ? "YES" : "NO");
    }
    return 0;
}
