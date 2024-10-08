#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector <int> sort (vector<int>& nums, int low, int high){
        if (low == high){
            vector <int> v = {nums[low]};
            return v;
        }
        else {
            int mid = low + (high-low)/2;
            vector <int> left = sort (nums, low, mid);
            vector <int> right = sort (nums, mid+1, high);
            vector <int> res;
            while (!left.empty() && ! right.empty()){
                if (left[0]< right[0]){
                    res.push_back (left[0]);
                    left.erase (left.begin());
                }
                else{
                    res.push_back (right[0]);
                    right.erase (right.begin());
                }
            }
            while (!left.empty()){
                res.push_back(left[0]);
                left.erase (left.begin());
            }
            while (!right.empty()){
                res.push_back(right[0]);
                right.erase (right.begin());
            }
            return res;
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        return sort (nums, 0, nums.size()-1);
    }

int main()
{
    vector <int> v = {5,2,3,1};
    vector <int> res = sortArray (v);
    for (int i =0; i < res.size(); i++){
        cout << res[i]<< " ";
    }

    return 0;
}

