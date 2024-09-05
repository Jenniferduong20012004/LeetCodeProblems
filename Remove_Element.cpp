#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int res =0;
        for (int i =0; i < nums.size(); i++){
            if (nums[i]!= val){
                res++;
            }
            else{
                nums.erase(nums.begin()+i);
                i-=1;
            }
        }
        return res;
    }
int main()
{
    vector <int> n = {1,2,3,4,5,6,7,8};
    int a = removeElement(n, 3);
    for (int i =0; i < n.size(); i++){
        cout << n[i]<< " ";
    }

    return 0;
}