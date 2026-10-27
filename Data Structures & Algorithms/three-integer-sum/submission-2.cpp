class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int l = nums.size();
        int i,j,k;

        set<vector<int>> result;

        for(i=0;i<l-2;i++){
            // for(j=i+1;j<l-1;j++){
            //     for(k=j+1;k<l;k++){
            //         if (nums[i] + nums[j] + nums[k] == 0){
            //             result.insert({nums[i], nums[j], nums[k]});
            //         }
            //     }
            // }

            j = i+1;
            k = l-1;

            while(j<k){
                if (nums[i] + nums[j] + nums[k] == 0){
                        result.insert({nums[i], nums[j], nums[k]});
                        j += 1;
                        k -= 1;
                }
                else if (nums[i] + nums[j] + nums[k] < 0){
                    j += 1;
                }
                else{
                    k -= 1;
                }

            }
        }
        return vector<vector<int>>(result.begin(), result.end());;

    }
};
