/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool primeSubOperation(vector<int>& nums) {
        int max =*max_element (nums.begin(), nums.end());
        vector <int> prime;
        prime.push_back (2);
        for (int i =3; i < max; i+=2){
            bool check = false;
            for (int j = 2; j < i; j++){
                if (i %j ==0){
                    check = true;
                    break;
                }
            }
            if (!check){
                prime.push_back (i);
            }
        }
        int left = nums[nums.size()-1];
        for (int i = nums.size()-2;i >-1; i--){
            if (nums[i]>= left){
                int a = nums[i];
                for (int j =0; j < prime.size(); j++){
                    if (prime[j]>=a){
                        return false;
                    }
                    a-= prime[j];
                    if (a <left){
                        nums[i]= a;
                        break;
                    }
                    else{
                        a+= prime[j];
                    }
                }
                if (nums[i]>= left){
                    return false;
                }
            }
            left = nums[i];
        }
        return true;
    }
int main()
{
    vector <int> n = {5,8,3};
    std::cout<<primeSubOperation(n);

    return 0;
}