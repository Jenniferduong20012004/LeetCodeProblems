/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int timduong (int x, int y, vector<vector<int>>& grid,vector < vector <int>> &flag){
        if (y== grid.size()-1 && x== grid[0].size()-1){
            return grid [y][x];
        }
        else{
            if (flag[y][x] !=0){
                return flag[y][x];
            }
            else{
                //down only
                if (x == grid[0].size()-1){
                    flag[y][x] = grid [y][x]+ timduong (x, y+1, grid, flag);
                    return flag [y][x];
                }
                // right only
                else if (y == grid.size()-1){
                    flag[y][x] = grid [y][x]+ timduong (x+1, y, grid, flag);
                    return flag [y][x];
                }
                else{
                    flag[y][x] = grid [y][x]+ min (timduong (x+1, y, grid, flag), timduong (x, y+1, grid, flag));
                    return flag [y][x];
                }
            }
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        int high = grid.size()-1;
        int width = grid[0].size()-1;
        vector < vector <int>> flag (high+1, vector <int>(width+1,0));
        return timduong (0,0,grid, flag);
    }
int main()
{
    vector <vector <int>> a = {{1,2,3},{4,5,6}};
    cout << minPathSum (a);
}