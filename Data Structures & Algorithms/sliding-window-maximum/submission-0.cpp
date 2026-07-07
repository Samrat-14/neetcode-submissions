class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int n=nums.size();

        for (int i=0; i<=n-k; i++) {
            int maxi = *max_element(nums.begin()+i, nums.begin()+i+k);
            res.push_back(maxi);
        }

        return res;
    }
};
