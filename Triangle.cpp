/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int tinh (int current, int x, vector<vector<int>>& triangle, vector <vector <int>> &flag){
        if (current == triangle.size()-1){
            return triangle [current][x];
        }
        else{
            if (flag[current][x] != -INT_MAX){
                return flag[current][x];
            }
            else{
                flag[current][x] = triangle[current][x] + min (tinh (current+1, x, triangle, flag), tinh (current+1, x+1, triangle, flag));
                return flag[current][x];

            }
        }
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector <vector <int>> flag(triangle.size(), vector <int> (triangle[triangle.size()-1].size(), -INT_MAX));
        return tinh (0,0, triangle, flag);
    }
int main()
{
    vector <vector<int>> triangle = {{2},{3,4},{6,5,7},{4,1,8,3}};
    cout <<minimumTotal (triangle);

    return 0;
}