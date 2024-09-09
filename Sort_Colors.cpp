/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sortColors(vector<int>& nums) {
        for (int i =0; i < nums.size(); i++){
                for (int j = i+1; j < nums.size(); j++){
                        if (nums[j]< nums[i]){
                            int temp = nums[j];
                            nums[j]= nums[i];
                            nums[i]= temp;
                        }
                    }
                }
            
        }
int main()
{
    vector <int> v = {2,0,1,1,2,0,2};
    sortColors(v);
    for (int i =0; i < v.size(); i++){
        cout << v[i]<< " ";
    }

    return 0;
}