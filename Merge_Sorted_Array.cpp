/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> v;
        int i =0, j =0;
        while (i < m && j < n){
            if (nums1[i] < nums2[j]){
                v.push_back (nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while (i <m){
            v.push_back (nums1[i]);
            i++; 
        }
        while (j <n){
            v.push_back(nums2[j]);
            j++;
        }
        nums1= v;
    }
int main()
{
    vector <int> nums1 = {1,2,3,0,0,0};
    vector <int> nums2 = {2,5,6};
    merge (nums1, 3, nums2, 3);
    for (int i =0; i < nums1.size(); i++){
        cout << nums1[i]<< " ";
    }
    return 0;
}