#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> permute(vector<int>& nums) {
        vector <vector<int>> res;
        sort (nums.begin(), nums.end());
        res.push_back(nums);
        while (next_permutation(nums.begin(), nums.end())){
            res.push_back(nums);    
        }
        return res;
    }
int main()
{
    vector<int> n = {1,5,3,2,5};
    vector <vector<int>> r = permute (n);
    for (int i =0; i < r.size(); i++){
        for (int j =0; j < r[i].size(); j++){
            cout << r[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}