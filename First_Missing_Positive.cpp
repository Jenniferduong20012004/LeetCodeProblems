/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        if (nums[nums.size()-1]<=0){
            return 1;
        }
        if (nums[0]>1){
            return 1;
        }
        bool firstInt = false;
        for (int i =0; i < nums.size()-1; i++){
            if (nums[i]>0){
                if (!firstInt){
                    if (nums[i]>1){
                        return 1;
                    }
                    firstInt = true;
            }
            if(nums[i+1]- nums [i]>1){
                        return nums[i]+1;
                }
            }
        }
        if (!firstInt){
            if (nums[nums.size()-1]>1){
                return 1;
            }
        }
        return nums[nums.size()-1]+1;
    }
int main()
{
    vector <int> v = {100000, 3, 4000, 2, 15, 1, 99999};
    cout << firstMissingPositive(v);

    return 0;
}