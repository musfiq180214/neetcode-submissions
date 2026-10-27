class Solution {
public:
    int zeroIndex(vector<int>& nums) {
        auto it = find(nums.begin(), nums.end(), 0);
        if (it == nums.end()) return -1;
        return it - nums.begin();
    }

    int productNonZero(vector<int>& nums) {
        int prod = 1;
        for (int x : nums) {
            if (x != 0) prod *= x;
        }
        return prod;
    }

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> productOthers(n, 0);          

        int zeroCount = count(nums.begin(), nums.end(), 0);
        int prod = productNonZero(nums);

        if (zeroCount >= 2) {
            return productOthers;                
        }

        if (zeroCount == 1) {
            productOthers[zeroIndex(nums)] = prod; 
            return productOthers;
        }

        for (int i = 0; i < n; i++) {
            productOthers[i] = prod / nums[i];
        }
        return productOthers;
    }
};