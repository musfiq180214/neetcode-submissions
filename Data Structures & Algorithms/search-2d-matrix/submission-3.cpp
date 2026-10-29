class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        bool found = false; 
        
        int NumRows = matrix.size();
        int NumCols = matrix[0].size();
        
        int i,j,possibleRow = -1;

        i = 0;


        while(i<NumRows){

            //cout<<"Present Row"<<i<<endl;
            if(matrix[i][0]==target){
                found = true;
                break;
            }
            else if(matrix[i][0]<target and matrix[i][NumCols-1]>=target){
                //cout<<"can be found in Row"<<i<<endl;
                j = 1;
                while(j<NumCols and matrix[i][j]<=target){
                    if(matrix[i][j]==target){
                        found = true;
                        break;
                    }
                    j += 1;
                }
            }
            i += 1;
        }

        

        return found;
        
    }
};
