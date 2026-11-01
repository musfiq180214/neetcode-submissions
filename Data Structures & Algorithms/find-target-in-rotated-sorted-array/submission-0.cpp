class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = nums.size(),i,index=-1;

        cout<<l<<endl;

        for(i=0;i<l;i++){
            if(nums[i]==target){
                index = i;
                break;
            }
        }




        return index;
    }
};
