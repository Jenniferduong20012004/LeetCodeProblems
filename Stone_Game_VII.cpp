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
        int different (int turn,vector<int>& stones, int left, int right,vector <vector<vector<int>>> &m, int total){
        if (left == right){
            return 0;
        }
        else{
            if (turn == 1){
                int minusLeft = total - stones[left];
                if (m[left+1][right][0] != INT_MIN){
                    minusLeft += m[left+1][right][0];
                }
                else{
                    minusLeft +=different (0, stones, left+1, right, m, minusLeft);
                }
                int minusRight = total - stones[right];
                if (m[left][right-1][0] != INT_MIN){
                    minusRight += m[left][right-1][0];
                }
                else{
                    minusRight +=different (0, stones, left, right-1, m, minusRight);
                }
                m[left][right][turn]=max (minusLeft, minusRight); 
                return max (minusLeft, minusRight);
            }
            else{
                int minusLeft = -(total - stones[left]);
                if (m[left+1][right][1] != INT_MIN){
                    minusLeft += m[left+1][right][1];
                }
                else{
                    minusLeft +=different (1, stones, left+1, right, m, 0-minusLeft);
                }
                int minusRight = -(total - stones[right]);
                if (m[left][right-1][1] != INT_MIN){
                    minusRight += m[left][right-1][1];
                }
                else{
                    minusRight +=different (1, stones, left, right-1, m, 0-minusRight);
                }
                m[left][right][turn]= min (minusLeft, minusRight);
                return min (minusLeft, minusRight);
            }
            // turn: bob =0, alice =1;
            
        }
    }
    int stoneGameVII(vector<int>& stones) {
        int total = accumulate (stones.begin(), stones.end(), 0);
        vector <vector<vector<int>>> m(stones.size(), vector<vector<int>>(stones.size(),vector<int>(2, INT_MIN)));
        return different (1, stones, 0, stones.size()-1,m, total);
    }
int main()
{
    vector <int> v ={5,3,1,4,2};
    cout << stoneGameVII (v);

    return 0;
}