/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
#include <vector>
using namespace std;
    bool tinhtoan (vector <int> &nums, int current, vector <int> &m){
        if (current >= nums.size()-1){
            return true;
        }
        else{
            if (m[current]!=-1){
                return m[current];
            }
            else{
                bool check = false;
                for (int i =nums[current]; i >0; i--){
                    check = check || tinhtoan (nums, current+i, m);
                    if (check){
                        break;
                    }
                }
                m[current]= check;
                return m[current];
            }
        }
    }
    bool canJump(vector<int>& nums) {
        vector <int> m(nums.size(),-1);
        return tinhtoan (nums, 0,m);
    }
int main()
{
    vector <int> nums = {3,2,1,0,4};
    std::cout<<canJump (nums);

    return 0;
}