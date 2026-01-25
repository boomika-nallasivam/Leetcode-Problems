#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long xK, yK, xQ, yQ;
        cin >> xK >> yK;
        cin >> xQ >> yQ;

        set<pair<long long, long long>> king, queen;

        long long dx[8] = {a, a, -a, -a, b, b, -b, -b};
        long long dy[8] = {b, -b, b, -b, a, -a, a, -a};

        for (int i = 0; i < 8; i++) {
            king.insert({xK + dx[i], yK + dy[i]});
            queen.insert({xQ + dx[i], yQ + dy[i]});
        }

        int ans = 0;
        for (auto &pos : king) {
            if (queen.count(pos)) ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}
