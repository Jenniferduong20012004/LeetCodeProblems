#include <vector>
#include <iostream>
using namespace std;
  bool isArraySpecial(vector<int>& nums) {
        if (nums.size()==2){
            if ((nums[0]%2 ==0 &&nums[1]%2 ==0)||(nums[0]%2 ==1 &&nums[1]%2 ==1)){
                return false;
            }
            return true;
        }
        for (int i =1;i < nums.size()-1; i++){
            if ((nums[i]%2 ==0 &&nums[i+1]%2 ==0)||(nums[i]%2 ==1 &&nums[i+1]%2 ==1)||(nums[i]%2 ==0 &&nums[i-1]%2 ==0)|| (nums[i]%2 ==1 &&nums[i-1]%2 ==1)){
                return false;
            }
        }
        return true;
    }
int main() {
    vector <int> v = {4,3,1,6};
    cout << isArraySpecial (v);

    return 0;
}
//Special Array I