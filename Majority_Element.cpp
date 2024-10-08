/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
using namespace std;
    int findmajority (vector<int>& nums, int low, int high,map <int, int> &m){
        if (low >= high){
            if (m.find(nums[low])== m.end()){
                m[nums[low]]= 1;
            }
            else{
                m[nums[low]] +=1;
            }
            return nums[low];
        }
        else{
            int mid = low + (high-low)/2;
            int major1= findmajority (nums, low, mid,m);
            int major2 = findmajority (nums, mid+1, high,m);
            if (major1 == major2){
                return major1;
            }
            else{
                if (m[major1]> m[major2]){
                    return major1;
                }
                else{
                    return major2;
                }
            }
        }
    }
    int majorityElement(vector<int>& nums) {
        map <int, int> m;
        return findmajority (nums,0, nums.size()-1, m);
    }
int main()
{
    vector <int> v = {2,2,1,1,1,2,2};
    cout << majorityElement(v)<< endl;

    return 0;
}