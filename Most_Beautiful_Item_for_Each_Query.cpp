/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector <int> v(queries.size(), 0);
        sort(items.begin(), items.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];});
        vector<pair<int, int>> vec_with_index;
        for (int i = 0; i < queries.size(); ++i) {
            vec_with_index.emplace_back(queries[i], i);
        }
        sort(vec_with_index.begin(), vec_with_index.end());
        int m = 0;
        int max0 = 0;
        for (int i = 0; i < queries.size(); i++) {
                while (m < items.size() && items[m][0] <= vec_with_index[i].first) {
                max0 = max(max0, items[m][1]);
                m++;
            }
        v[vec_with_index[i].second]=max0; 
    }
        return v;
    }
int main()
{
    vector <vector<int>> items = {{1,2},{3,2},{2,4},{5,6},{3,5}};
    vector <int> queries ={1,2,3,4,5,6};
    vector <int> v = maximumBeauty(items, queries);
    for (int i =0; i < v.size(); i++){
        cout << v[i]<< " ";
    }

    return 0;
}