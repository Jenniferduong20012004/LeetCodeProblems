/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
vector<int> resultsArray(vector<int>& nums, int k) {
        vector <int> res;
        for (int i =0; i <= nums.size()-k; i++){
            int prev = nums[i];
            bool check = true;
            for (int j = i+1; j <k+i; j++){
                if (prev != nums[j]-1){
                    check = false;
                    break;
                }
                prev = nums[j];
            }
            if (check){
                res.push_back (nums[i+k-1]);
            }
            else{
                res.push_back(-1);
            }
        }
        return res;
    }
int main()
{
    vector <int > v = {1,2,3,4,3,2,5};
    vector <int > k = resultsArray (v, 3);
    for (int i =0; i < k.size(); i++){
        cout << k[i]<< " ";
    }

    return 0;
}