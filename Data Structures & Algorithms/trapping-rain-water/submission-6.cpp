class Solution {
public:
    int trap(vector<int>& height) {
        int width = height.size(), i, lH = height[0], rH = 0;
        int diff1, diff2;
        int totalArea = 0, area;

        vector<int> rHs(width,0);
        
        rHs[width - 1] = height[width - 1];

        for (i = width - 2; i >= 0; i--) {
            rHs[i] = max(rHs[i + 1], height[i]);
        }   
        for (i = 1; i < width - 1; i++) {
            lH = max(lH, height[i]);
            rH = rHs[i];
            diff1 = lH - height[i];
            diff1 = max(0, diff1);

            diff2 = rH - height[i];
            diff2 = max(0, diff2);

            area = min(diff1, diff2);

            totalArea += area;
        }
        return totalArea;
    }
};