class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        bool found = false;

        int NumRows = matrix.size();
        int NumCols = matrix[0].size();

        int i,j,k,possibleRow = -1,mid=0;

        

        if(target<matrix[0][0] || target>matrix[NumRows-1][NumCols-1]){
            return false;
        }

        if(target==matrix[0][0] || target==matrix[NumRows-1][NumCols-1]){
            return true;
        }
        if(NumRows==1){
            
            j = 0;
            k = NumCols-1;

            while(j<k){
                mid =j+(k-j)/2;
                if(matrix[0][mid]==target || matrix[0][k]==target){
                    found = true;
                    return found;
                    break;
                    }
                else if(matrix[0][mid]<target){
                    j = mid+1;
                    }
                else{
                    k = mid;
                }
            }

            return found;
        }

        // check last row and return verdict here if found

        j = 0;
        if(NumRows>=1){
            while(j<NumCols and matrix[NumRows-1][j]<=target){
                if(matrix[NumRows-1][j]==target){
                    found = true;
                    return found;
                }
                j += 1;
            }
        }
        

        i = 0;



        while(i<NumRows){

            if(matrix[i][0]>=target){
                break;
            }

            i += 1;
        }

        if (i == NumRows) {
            return false;
        }


        if(matrix[i][0]==target || matrix[i][NumCols-1]==target){
            found = true;
            return found;
        }
        else{

        i -= 1;

        j = 0;
        k = NumCols-1;

        while(j<k){
            mid =j+(k-j)/2;
            if(matrix[i][mid]==target || matrix[i][k]==target){
                found = true;
                break;
                }
            else if(matrix[i][mid]<target){
                j = mid+1;
                }
            else{
                k = mid;
            }
        }


        return found;

        }

    }
};
