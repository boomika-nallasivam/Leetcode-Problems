#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++) cin >> a[i];

    set<int> used(a.begin(), a.end()); 
    vector<vector<int>> result(k);

    for (int i = 0; i < k; i++) result[i].push_back(a[i]);

    int current = 1;
    for (int i = 0; i < k; i++) {
        while (result[i].size() < n) {
            if (used.count(current) == 0) {
                result[i].push_back(current);
                used.insert(current);
            }
            current++;
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " " ;
        }
        cout << "\n";
    }
    
    return 0;
}
