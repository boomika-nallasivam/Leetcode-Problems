class PeekingIterator : public Iterator {
private: 
    int n;
    int low=0;
    vector<int>ans;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    n=nums.size();
        ans=nums;
	}
	
	int peek() {
        return ans[low];
	}

	int next() {
	    return ans[low++];
	}
	
	bool hasNext() const {
	    if(low<n){
            return true;
        }
        return false;
	}
};