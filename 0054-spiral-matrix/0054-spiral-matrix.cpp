class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         int rows = matrix.size();
        int cols = matrix[0].size();

        // Set up pointers to traverse the matrix
        int row = 0;
        int col = -1;

        // Set the initial direction to 1 for moving left to right
        int direction = 1;

        // Create an array to store the elements in spiral order
        vector<int> result;

        // Traverse the matrix in a spiral order
        while (rows > 0 && cols > 0) {

            for (int i = 0; i < cols; i++) {
                col += direction;
                result.push_back(matrix[row][col]);
            }
            rows--;
            for (int i = 0; i < rows; i++) {
                row += direction;
                result.push_back(matrix[row][col]);
            }
            cols--;

            // Flip the direction for the next traversal
            direction *= -1;
        }

        return result;
    }
};