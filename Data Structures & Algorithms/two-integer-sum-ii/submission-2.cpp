class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = static_cast<int>(numbers.size());

        int i = 0, j  = l-1;

        while(i<j){

            if ( numbers[i]+numbers[j] == target ){
                return {i+1, j+1};
                break;
            }
            else if (numbers[i]+numbers[j] < target){
                i += 1;
            }
            else if  (numbers[i]+numbers[j] > target){
                j -= 1;
            };
        }
        return {};
    }
};
