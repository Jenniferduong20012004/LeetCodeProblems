
#include <iostream>
#include <vector>
using namespace std;
int count (int m, int n, vector <vector<int>> &v){
        if (m ==1 || n ==1){
            return 1;
        }
        else{
            if (v[m][n]==0){
                v[m][n]= count (m-1,n,v)+ count (m, n-1,v);
            }
            return v[m][n];
        }
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> v (m + 1, vector<int>(n+ 1, 0));
        return count (m,n, v);
    }
int main()
{
    int m = 7, n =10;
    cout << uniquePaths(m,n);

    return 0;
}