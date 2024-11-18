/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>
using namespace std;
int tinhtoan (int currentIndex, int n, vector<vector<int>> &m){
        if (n==0){
            return 1;
        }
        else{
            if (m[n][currentIndex] != INT_MIN){
                return m[n][currentIndex];
            }
            else{
                int total =0;
                int a = currentIndex;
                while (a <5){
                    total += tinhtoan (a, n-1,m);
                    a++;
                }
                m[n][currentIndex]= total;
                return m[n][currentIndex];
            }
        }
    }
    int countVowelStrings(int n) {
        vector <int> c = {1,2,3,4,5};
        vector <vector<int>> m (n+1, vector<int>(5, INT_MIN));
        return tinhtoan(0, n, m);
    }
int main()
{
    cout <<countVowelStrings (6);

    return 0;
}