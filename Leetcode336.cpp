class Solution {
public:
    bool isPalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    vector<vector<int>> palindromePairs(vector<string>& words) {

        int n = words.size();
        unordered_map<string, vector<int>> mp;
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            mp[words[i]].push_back(i);
        }

        for (int i = 0; i < n; i++) {
            string s = words[i];
            int len = s.size();

            if (s.empty()) {
                for (int j = 0; j < n; j++) {
                    if (i != j && isPalindrome(words[j], 0, words[j].size() - 1)) {
                        ans.push_back({i, j});
                        ans.push_back({j, i});
                    }
                }
                continue;
            }

            string rev = s;
            reverse(rev.begin(), rev.end());
            if (mp.count(rev)) {
                for (int idx : mp[rev]) {
                    if (idx != i) ans.push_back({i, idx});
                }
            }

            for (int cut = 1; cut < len; cut++) {
                if (isPalindrome(s, 0, cut - 1)) {
                    string right = s.substr(cut);
                    reverse(right.begin(), right.end());
                    if (mp.count(right)) {
                        for (int idx : mp[right]) {
                            if (idx != i) ans.push_back({idx, i});
                        }
                    }
                }

                if (isPalindrome(s, cut, len - 1)) {
                    string left = s.substr(0, cut);
                    reverse(left.begin(), left.end());
                    if (mp.count(left)) {
                        for (int idx : mp[left]) {
                            if (idx != i) ans.push_back({i, idx});
                        }
                    }
                }
            }
        }

        return ans;
    }
};