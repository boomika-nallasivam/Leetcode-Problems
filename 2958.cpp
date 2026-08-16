1class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(bin(i)==k) sum+=nums[i];
        }
        return sum;
    }
    int bin(int n)
    {
        int k = 0;
        while(n>0)
        {
            if(n%2!=0) k++;
            n=n/2;
        }
        return k;
    }
//please upvote...
};
