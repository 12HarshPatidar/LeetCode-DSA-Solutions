class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int stRow = 0, endRow = matrix.size() - 1;

        while(stRow <= endRow) {

            int midRow = stRow + (endRow - stRow)/2;

            if(matrix[midRow][0] <= target && matrix[midRow][matrix[0].size() - 1] >= target) {

                int stCol = 0, endCol = matrix[0].size() - 1;

                while(stCol <= endCol) {

                    int midCol = stCol + (endCol - stCol)/2;

                    if(matrix[midRow][midCol] == target) {

                        return true;

                    }else if(matrix[midRow][midCol] > target) {

                        endCol = midCol - 1;

                    }else {

                        stCol = midCol + 1;

                    }

                }

                return false;

            }else if(matrix[midRow][0] < target) {

                stRow = midRow + 1;

            }else {

                endRow = midRow - 1;

            }
        }
    
    return false;
    }
};