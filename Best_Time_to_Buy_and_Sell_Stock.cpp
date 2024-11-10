/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxPro =0;
        for (int i =0; i < prices.size(); i++){
            maxPro = max (maxPro, prices[i]- minPrice);
            minPrice = min (minPrice, prices[i]);
        }
        return maxPro;
    }
int main()
{
    vector <int> grid = {7,1,5,3,6,4};
    cout << maxProfit (grid);
    return 0;
}