class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int a = 0;
        for(int i=0 ; i<n ; i++){
            a += (s[i] ^ i) & 1;
        }
        return min(a , n - a);
    }
    
};
