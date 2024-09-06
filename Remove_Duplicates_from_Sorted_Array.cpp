
#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        for (int i =0; i< nums.size()-1; i++){
            if (nums[i]== nums[i+1]){
                nums.erase (nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
int main()
{
    vector <int> v = {1,1,1,1,1,9,10};
    int a = removeDuplicates (v);
    for (int i =0; i < v.size(); i++){
        cout << v[i]<< " ";
    }

    return 0;
}