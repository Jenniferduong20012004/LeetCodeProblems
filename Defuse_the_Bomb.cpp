/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> decrypt(vector<int>& code, int k) {
        vector <int> res(code.size(), INT_MIN);
        if (k ==0){
            for (int i =0; i < code.size(); i++){
                res[i]=0;
            }
            return res;
        }
        else if (k >0){
            int i =0;
            int left =i+1;
            int right = left +k-1;
            cout << left << " : "<< right << endl;
            while (i < code.size()){
                if (left <= right){
                    int to=0;
                    for (int j =left; j <=right; j++){
                        to += code[j];
                    }
                    res[i]= to;
                    left++;
                    right++;
                }
                else {
                    int to = 0;
                    for (int j =left; j < code.size(); j++){
                        to += code[j];
                    }
                    for (int j =0; j <= right; j++){
                        to += code[j];
                    }
                    left++;
                    right++;
                    res[i]= to;
                }
                if (right >= code.size()){
                    right =0;
                }
                if (left >= code.size()){
                    left =0;
                }
                i++;
            }
            return res;
        }
        else{
            int i = code.size()-1;
            int right = i-1;
            int left = right+k+1;
            while (i>=0){
                if (left <= right){
                    int to =0;
                    for (int j= left; j <= right; j++){
                        to+=code[j];
                    }
                    res[i]= to;
                    left --;
                    right--;
                }
                else{
                    int to =0;
                    for (int j =0; j <= right; j++){
                        to += code[j];
                    }
                    for (int j = left; j < code.size(); j++){
                        to += code[j];
                    }
                    res[i]= to;
                    left --;
                    right--;
                }
                i--;
                if (left <0){
                    left = code.size()-1;
                }
                if (right <0){
                    right = code.size()-1;
                }
            }
            return res;
        }
    }
int main()
{
    vector <int > v= {2,4,9,3};
    int k =-2;
    vector <int> res = decrypt (v,k);
    for (int i =0; i < res.size(); i++){
        cout << res[i]<< " ";
    }

    return 0;
}