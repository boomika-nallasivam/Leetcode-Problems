class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int, int> m;

        int p1 = 0;
        int p2 = k - 1;

        while (p2 < nums.size()) {
            set<int> s;

            for (int i = p1; i <= p2; i++) {
                s.insert(nums[i]);
            }

            for (int x : s) {
                m[x]++;
            }

            p1++;
            p2++;
        }

        int ans = -1;

        for (auto it : m) {
            if (it.second == 1) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};
