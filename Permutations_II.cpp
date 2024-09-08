/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> permuteUnique(vector<int>& nums) {
        map <vector<int>, int> m;
        vector<vector<int>> result;
        sort (nums.begin(), nums.end());
        m.insert (pair<vector<int>, int>(nums, 0));
        while (next_permutation (nums.begin(), nums.end())){
            m.insert (pair<vector<int>, int>(nums, 0));
        }
        for (auto it = m.begin(); it != m.end(); it++){
            result.push_back (it-> first);
        }
        return result;
    }
int main()
{
    vector <int> v = {1,4,2,4,1};
    vector<vector<int>> r = permuteUnique(v);
    for (int i =0; i < r.size(); i++){
        for (int j =0; j < r[i].size(); j++){
            cout << r[i][j]<< " ";
        }
        cout << endl;
    }
}