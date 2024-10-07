
#include <iostream>
#include <vector>
using namespace std;
int count (vector<vector<int>>& obstacleGrid, int m, int n, vector<vector<int>> &v){
        if (obstacleGrid [m][n]== 1){
            return 0;
        }
        else if (m ==0 && n ==0){
            return 1;
        }
        else if (m==0){
            if (v[m][n]==0){
                v[m][n]= count (obstacleGrid, m, n-1, v); 
            }
            return v[m][n];
        }
        else if (n==0){
            if (v[m][n]==0){
                v[m][n]= count (obstacleGrid, m-1, n, v); 
            }
            return v[m][n];
        }
        else{
            if (v[m][n]==0){
                v[m][n]= count (obstacleGrid, m-1, n, v) +  count (obstacleGrid, m, n-1, v); 
            }
            return v[m][n];
        }
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size()-1;
        int n = obstacleGrid[0].size()-1;
        vector <vector<int>> v(m+1, vector<int>(n+1,0));
        return count (obstacleGrid, m, n, v);
    }
int main()
{
    vector <vector<int>> v;
    v.push_back( {0,1});
    v.push_back( {0,0});
    cout << uniquePathsWithObstacles(v);

    return 0;
}