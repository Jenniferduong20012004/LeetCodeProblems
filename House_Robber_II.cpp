/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
    int tinh (vector<int>& nums, int include1, int index,vector <vector <int>>  &m){
        if (index ==nums.size()-1){
            if (include1==1){
                return 0;
            }
            else{
                return nums[index];
            }
        }
        else if (index >= nums.size()){
            return 0;
        }
        else {
            if(m[index][include1] != INT_MIN){
                return m[index][include1];
            }
            else{
                m[index][include1] = max (nums[index]+tinh(nums, include1, index+2,m), tinh (nums, include1, index+1,m));
                return m[index][include1];
            }
        }
    }
    int rob(vector<int>& nums) {
        if (nums.size()==1){
            return nums[0];
        }
        vector <vector <int>> m (nums.size(), vector<int>(2, INT_MIN));
        return max (tinh (nums, 0, 1, m), tinh (nums, 1,0,m));

    }
int main()
{
    vector <int > v= {2,7,4,1,8,1};
    cout << rob(v)<< endl;


    return 0;
}