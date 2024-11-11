/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <vector>
#include <iostream>
#include <climits>
using namespace std;
int tinhtoan (int first, int last, vector<int>& piles, int turn, vector <vector<vector<int>>> &m){
        if (first == last){
            if (turn ==1){ // alice
                return piles [first];
            }
            else{
                return -piles[first];
            }
        }
        else{
            if (m[first][last][turn]!= -INT_MAX){
                return m[first][last][turn];
            }
            if (turn== 1){
                int a = max (piles[first]+tinhtoan(first+1, last, piles, 0,m), piles[last]+tinhtoan (first, last-1,piles,0,m));
                m[first][last][turn] = a;
                return a; 
            }
            else{
                int a = max (-piles[first]+tinhtoan(first+1, last, piles, 1,m), -piles[last]+tinhtoan (first, last-1,piles,1,m));
                m[first][last][turn] = a;
                return a;
            }
        }
    }
    bool stoneGame(vector<int>& piles) {
        vector <vector<vector<int>>> m (piles.size(), vector<vector<int>>(piles.size(),vector<int>(2,-INT_MAX)));
        if (tinhtoan (0, piles.size()-1, piles, 1,m)>0){
            return true;
        }
        return false;
    }
int main()
{
    vector <int> v = {5,3,4,5};
    cout << stoneGame (v);

    return 0;
}