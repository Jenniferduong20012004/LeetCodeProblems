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
int tinhtoan (vector<int>& prices, int current, int cothemua,vector <vector<vector<int>>> &m, int transaction){
        if (current == prices.size()-1){
            if (cothemua ==0){
                return prices[current];
            }
            else{
                return 0;
            }
        }
        else{
            if (m[current][cothemua][transaction] != -INT_MAX){
                return m[current][cothemua][transaction];
            }
            if (cothemua ==0){ 
                if (transaction <2){
                int total = max(prices[current]+tinhtoan (prices, current+1, 1,m, transaction+1), tinhtoan (prices, current+1, 0,m, transaction));
                m[current][cothemua][transaction] = total;
                return total;
                }
                return 0;
            }
            else{
                if (transaction <2){
                int total = max(-prices[current]+tinhtoan (prices, current+1, 0,m, transaction), tinhtoan (prices, current+1, 1,m, transaction));
                m[current][cothemua][transaction] = total;
                return total;
                }
                return 0;
            }
        }
    }
    int maxProfit(vector<int>& prices) {
        vector <vector<vector<int>>> m(prices.size(),  vector<vector<int>>(2,vector<int>(3,-INT_MAX)));
        return tinhtoan (prices, 0, 1, m, 0);
    }
int main()
{
    vector <int> price = {2,1,4,5,2,9,7};
    cout << maxProfit (price);

    return 0;
}