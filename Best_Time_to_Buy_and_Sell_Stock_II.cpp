/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
#include <vector>
#include <climits>
using namespace std;
int tinhtoan (vector<int>& prices, int current, int cothemua,vector <vector<int>> &m){
        if (current == prices.size()-1){
            if (cothemua ==0){
                return prices[current];
            }
            else{
                return 0;
            }
        }
        else{
            if (m[current][cothemua] != -INT_MAX){
                return m[current][cothemua];
            }
            if (cothemua ==0){ //dang hold 
                int total = max(prices[current]+tinhtoan (prices, current+1, 1,m), tinhtoan (prices, current+1, 0,m));// ban / hold tiep
                m[current][cothemua] = total;
                return total;
            }
            else{
                int total = max(-prices[current]+tinhtoan (prices, current+1, 0,m), tinhtoan (prices, current+1, 1,m));// mua / ko lam gi
                m[current][cothemua] = total;
                return total;
            }
        }
    }
    int maxProfit(vector<int>& prices) {
        vector <vector<int>> m(prices.size(), vector<int>(2, -INT_MAX));
        return tinhtoan (prices, 0, 1, m);
    }
int main()
{
    vector <int> price = {7,1,5,3,6,4};
    cout << maxProfit (price);

    return 0;
}