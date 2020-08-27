class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // O(mn) time complexity, O(m+n) space complexity
        // a solution with O(1) space complexity is available in the Solution section.
        unordered_set<int> rowSet, colSet;
        int numRows = matrix.size();
        int numCols = matrix[0].size();

        for (int i=0;i<numRows;i++){
            for (int j=0;j<numCols;j++){
                if (matrix[i][j] == 0){
                    rowSet.insert(i);
                    colSet.insert(j);
                }
            }
        }

        for (int i=0;i<numRows;i++){
            for (int j=0;j<numCols;j++){
                if (rowSet.find(i)!=rowSet.end() || colSet.find(j)!=colSet.end()){
                    matrix[i][j] = 0;
                }
            }
        }

    }
};
