/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <climits>
using namespace std;

int tinhtoan (vector<vector<int>>& grid, int r1, int c1, int c2, vector<vector<vector<int>>>& memo){
        int r2 = r1+c1-c2;
        if (r1 >= grid.size()|| r2 >= grid.size()|| c1 >= grid.size()|| c2 >= grid.size()|| grid [r1][c1]==-1|| grid[r2][c2]==-1){
            return -INT_MAX;
        }
        else if(r1 == grid.size()-1 && c1 == grid.size()-1){
            return grid[r1][c1];
        }
        else{
            if (memo[r1][c1][c2]!=-1){
                return memo[r1][c1][c2];
            }
            else{
                int ans = grid [r1][c1];
                if (r1 != r2){
                    ans += grid [r2][c2];
                } //r1 c2, c1 c2, r1 r2, 
                ans += max (max(tinhtoan(grid, r1,c1+1,c2,memo),tinhtoan (grid, r1+1,c1,c2+1,memo)), max(tinhtoan (grid, r1,c1+1,c2+1,memo), tinhtoan(grid, r1+1,c1,c2,memo)));
                memo[r1][c1][c2]= ans;
                return ans;
            }
        }
    }
    int cherryPickup(vector<vector<int>>& grid) {
        vector <vector <vector <int>>> memo (grid.size(), vector <vector<int>>(grid.size(), vector<int>(grid.size(),-1)));
        int a = tinhtoan (grid, 0,0,0,memo);
        if (a>0){
            return a;
        }
        return 0;
    }
int main()
{
    vector <vector <int>> grid = {{0,1,-1},{1,0,-1},{1,1,1}};
    cout << cherryPickup (grid);
    return 0;
}