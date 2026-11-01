class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int l1 = nums1.size();
        int l2  = nums2.size();

        int l = l1+l2;

        int m;

    
        vector<int> numsMerged;

        int i = 0, j = 0;

        while(i<l1 && j<l2){

            if(nums1[i]<nums2[j]){
                numsMerged.push_back(nums1[i]);
                i++;
            }
            else{
                numsMerged.push_back(nums2[j]);
                j++;
            }

        }

        if(i<l1){
            while(i<l1){
                numsMerged.push_back(nums1[i]);
                i++;
            }
        }
        else if(j<l2){
            while(j<l2){
                numsMerged.push_back(nums2[j]);
                j++;
            }
        }

        // for (int i = 0; i < numsMerged.size(); i++) {
        //     cout << numsMerged[i] << " ";
        // }


        if(l%2==1)
        {
            return numsMerged[l/2];
        }
        else{
            return (numsMerged[l/2] + numsMerged[l/2-1])/2.0;
        }

        return 0;
    }
};
