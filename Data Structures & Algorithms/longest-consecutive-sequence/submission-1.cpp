class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int n = nums.size(), diff;
        if (n == 0) return 0;
        int i = 1;
        int count = 1;
        int best = 1;
        // for (i = 0; i < n; i++) {
        //     cout<<nums[i]<<" ";
        // }
        cout<<endl;
        for (i = 1; i < n; i++) {
            diff = nums[i]-nums[i-1];
            // cout<<"different: "<<diff<<endl;
            if (diff ==1){
                count++;
            }
            else {
                if (count > best){
                    best = count;
                }
                count = 1;
            }
        }
        if (count>best){
            best = count;
        }
        return best;  
    }
};
