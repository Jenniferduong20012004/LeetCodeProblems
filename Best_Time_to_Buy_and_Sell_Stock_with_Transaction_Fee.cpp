

#include <iostream>
#include <map>
#include <vector>
#include <climits>
using namespace std;
int tinhtoan (vector<int>& prices, int current, int cothemua,vector <vector<int>> &m, int fee){
        if (current == prices.size()-1){
            if (cothemua ==0){
                return prices[current]-fee;
            }
            else{
                return 0;
            }
        }
        else{
            if (m[current][cothemua] != -INT_MAX){
                return m[current][cothemua];
            }
            if (cothemua ==0){
                int total = max(prices[current]+tinhtoan (prices, current+1, 1,m,fee)-fee, tinhtoan (prices, current+1, 0,m, fee));
                m[current][cothemua] = total;
                return total;
            }
            else{
                int total = max(-prices[current]+tinhtoan (prices, current+1, 0,m,fee), tinhtoan (prices, current+1, 1,m,fee));
                m[current][cothemua] = total;
                return total;
            }
        }
    }
    int maxProfit(vector<int>& prices, int fee) {
        vector <vector<int>> m(prices.size(), vector<int>(2, -INT_MAX));
        return tinhtoan (prices, 0, 1, m,fee);
    }
int main()
{
    vector <int> price = {1,3,2,8,4,9};
    cout << maxProfit (price,2);

    return 0;
}