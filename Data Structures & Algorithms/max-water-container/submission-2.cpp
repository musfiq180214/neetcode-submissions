class Solution {
public:

    int maxArea(vector<int>& heights) {

        int maxArea = 0;

        int n = heights.size();
        int i=0,j=n-1;
        int leftHeight,rightHeight;

        leftHeight = heights[i];

        rightHeight = heights[j];

        // cout<<"Left Value"<<leftHeight<<endl;
        // cout<<"Right Value "<<rightHeight<<endl;


        int currentArea = min(leftHeight, rightHeight) * (j - i);

        //cout<<"Current Area "<<currentArea<<endl;

        maxArea = max(maxArea, currentArea);


        while(i<j){
            // cout<<"--------------------"<<endl;
            // cout<<"present i"<<i<<endl;

            // cout<<"present j"<<j<<endl;


            if (leftHeight < rightHeight) {
                bool leftMoved = false;
                while(i<j and heights[i]<=leftHeight){
                    i++;
                    leftMoved = true;
                }
                if(leftMoved){
                    leftHeight = heights[i];
                    //cout<<"LeftMoved "<<leftMoved<<endl;
                }
            }
            else{
                bool rightMoved = false;
                while(i<j and heights[j]<=rightHeight){
                    j--;
                    rightMoved = true;
                }
                if(rightMoved){
                    rightHeight = heights[j];
                    //cout<<"RightMoved "<<rightMoved<<endl;
                }
            }

            // cout<<"after run"<<endl;

            // cout<<"Left Value"<<leftHeight<<endl;
            // cout<<"Right Value "<<rightHeight<<endl;

            // cout<<"present i"<<i<<endl;
            // cout<<"present j"<<j<<endl;


            int currentArea = min(leftHeight, rightHeight) * (j - i);

            // cout<<"Current Area "<<currentArea<<endl;

            maxArea = max(maxArea, currentArea);

            

            //cout<<"present i"<<i<<endl;

            //cout<<"present j"<<j<<endl;
        }




        return maxArea;
    }
};
