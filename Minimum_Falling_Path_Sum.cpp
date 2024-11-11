/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <vector>
#include <iostream>
#include <climits>
using namespace std;
int tinhtoan (vector<vector<int>>& matrix, vector<vector<int>>& m, int row, int column){
        if (row == matrix.size()-1){
            return matrix[row][column];
        }
        else{
            if (m[row][column]!= -INT_MAX){
                return m[row][column];
            }
            int a =0;
            if (column == 0){
                a = min (matrix[row][column]+ tinhtoan(matrix, m, row+1, column), matrix[row][column]+ tinhtoan(matrix, m, row+1, column+1));
            }
            else if (column == matrix.size()-1){
                a = min (matrix[row][column]+ tinhtoan(matrix, m, row+1, column), matrix[row][column]+ tinhtoan(matrix, m, row+1, column-1));
            }
            else{
                a = min (min(matrix[row][column]+ tinhtoan(matrix, m, row+1, column), matrix[row][column]+ tinhtoan(matrix, m, row+1, column+1)), matrix[row][column]+  tinhtoan(matrix, m, row+1, column-1));
            }
            m[row][column]=a;
            return a;
        }
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>> m (matrix.size(), vector <int>(matrix.size(), -INT_MAX));
        int min = INT_MAX;
        for (int i =0; i < matrix.size(); i++){
            int a = tinhtoan (matrix, m, 0, i);
            if (a < min){
                min = a;
            }
        }
        return min;
    }
int main()
{
    vector <vector<int>> v = {{2,1,3},{6,5,4},{7,8,9}};
    cout << minFallingPathSum (v);

    return 0;
}