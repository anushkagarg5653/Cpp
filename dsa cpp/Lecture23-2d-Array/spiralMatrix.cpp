#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector <int> ans;
        int count = 0;
        int total = row*col;
        
        int startCol = 0;
        int startRow = 0;
        int endRow = row-1;
        int endCol = col-1;
        
        while(count<total){
            
            //print start row
            for(int index = startCol;count<total && index<= endCol; index++){
                ans.push_back(matrix[startRow][index]);
                    count++;
            }
            startRow++;
            
            // print end col
            for(int index = startRow;count<total && index<= endRow; index++){
                ans.push_back(matrix[index][endCol]);
                    count++;
            }
            endCol--;
            // print end row
            for(int index = endCol;count<total && index>= startCol; index--){
                ans.push_back(matrix[endRow][index]);
                    count++;
            }
            endRow--;
            // print start col
            for(int index = endRow;count<total && index>= startRow; index--){
                ans.push_back(matrix[index][startCol]);
                    count++;
            }
            startCol++;
        }
        return ans;
    }
};