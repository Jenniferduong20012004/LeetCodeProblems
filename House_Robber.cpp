/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
using namespace std;
    int result (vector<int>& nums, int index, map <int, int> &m){
        if (index ==0){
            return nums[0];
        }
        else if (index ==1){
            return max (nums[0], nums[1]);
        }
        else{
            if (m.find (index)== m.end()){
                m[index]= max (result (nums, index-2,m)+ nums[index], result (nums,index-1,m));
            }
            return m[index];
        }
    }
    int rob(vector<int>& nums) {
        map <int, int> m;     
        return result (nums, nums.size()-1, m);   
    }
int main()
{
    vector <int> v = {1,5,3,5,3,4,2,5,3,5,32};
    int res = rob (v);
    cout << res ;

    return 0;
}