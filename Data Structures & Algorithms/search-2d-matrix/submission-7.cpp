class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        bool found = false;

        int NumRows = matrix.size();
        int NumCols = matrix[0].size();

        int i,j,k,possibleRow = -1,mid=0;

        i = 0;

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


        // while(i<NumRows){

        //     cout<<"Present Row"<<i<<endl;
        //     if(matrix[i][0]>=target){
        //         break;
        //     }

        //     i += 1;
        // }

        // Transform this while loop into a binary search to find the row that may contain the target
        int low = 0, high = NumRows - 1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (matrix[mid][0] == target) {
                return true;
            } else if (matrix[mid][0] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        i = high; // The row that may contain the target is now in 'i'

        if (i == NumRows) {
            return false;
        }


        if(matrix[i][0]==target || matrix[i][NumCols-1]==target){
            found = true;
            return found;
        }
        else{


        cout<<"Target Row"<<i<<endl;

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
