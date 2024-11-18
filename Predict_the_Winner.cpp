/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
    int tinhtoan (vector<int>& nums, int turn, vector <vector<vector<int>>> &m, int left, int right){
        if (left == right){
            if (turn == 0){
                return nums[left];
            }
            else{
                return - nums[left];
            }
        }
        else{
            if (m[left][right][turn]!= INT_MIN){
                return m[left][right][turn];
            }
            else{
                if (turn ==0){
                    m[left][right][turn] = max (nums[left]+ tinhtoan (nums, 1, m, left+1, right), nums[right]+ tinhtoan(nums,1,m, left, right-1));
                    return  m[left][right][turn];
                }
                else{
                    m[left][right][turn] = min (-nums[left]+ tinhtoan (nums, 0, m, left+1, right), -nums[right]+ tinhtoan(nums,0,m, left, right-1));
                    return  m[left][right][turn];
                }
            }
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        vector <vector<vector<int>>> m (nums.size(), vector<vector<int>>(nums.size(), vector<int>(2, INT_MIN)));
        int a = tinhtoan (nums,0, m,0, nums.size()-1);
        if (a>=0){
            return true;
        }
        else{
            return false;
        }
    }
int main()
{
    vector <int > v= {1,5,2};
    cout << predictTheWinner(v)<< endl;


    return 0;
}