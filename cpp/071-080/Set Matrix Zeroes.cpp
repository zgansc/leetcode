class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        
        bool col0 = false;
        int outer = matrix.size();
        int inner = matrix[0].size();
        
        for (int i = 0; i < outer; i++) {
            if (matrix[i][0] == 0)
                col0 = true;
            for (int j = 1; j < inner; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for (int i = outer-1; i >= 0; i--) {
            for (int j = inner-1; j >= 1; j--) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
            if(col0)
                matrix[i][0] = 0;
        }
        
    }
};
