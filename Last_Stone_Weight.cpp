/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size()==1){
            return stones[0];
        }
        sort (stones.begin(), stones.end());
        while (stones[stones.size()-2]!= 0){
            stones[stones.size()-1] = stones[stones.size()-1] - stones[stones.size()-2];
            stones[stones.size()-2] =0;
            sort (stones.begin(), stones.end());
        }
        return stones[stones.size()-1];
    }
int main()
{
    vector <int > v= {2,7,4,1,8,1};
    cout << lastStoneWeight(v)<< endl;


    return 0;
}