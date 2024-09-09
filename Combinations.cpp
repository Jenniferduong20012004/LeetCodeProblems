/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void tinh (int n, int k, vector <vector<int>> &res, vector <int> current, int index){
        if (current.size()== k){
            res.push_back (current);
            return;
        }
        else{
            for (int i = index; i <=n; i++){
                current.push_back(i);
                tinh (n, k, res, current, i+1);
                current.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector <vector<int>> res;
        vector<int> current;
        tinh (n, k, res, current, 1);
        return res;
    }
int main()
{
    vector <vector <int>> v = combine (11, 2);
    for (int i =0; i < v.size(); i++){
        for (int j =0; j < v[i].size(); j++){
            cout << v[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}