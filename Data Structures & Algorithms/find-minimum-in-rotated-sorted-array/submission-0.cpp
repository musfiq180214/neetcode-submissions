class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0], l = size(nums);

        for(int i=1;i<l;i++){
            if (nums[i]<min){
                min = nums[i];
            }
        }
        return min;
    }
};