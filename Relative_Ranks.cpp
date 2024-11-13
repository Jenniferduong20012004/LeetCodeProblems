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
#include <string>
using namespace std;
    vector<string> findRelativeRanks(vector<int>& score) {
        vector <pair <int, int>> v;
        for (int i =0; i < score.size(); i++){
            v.emplace_back (score[i], i);
        }
        sort (v.begin(), v.end());
        vector <string> res (score.size(), "0");
        if (v.size()>0){
        res[v[v.size()-1].second]= "Gold Medal";
        }
        if (v.size()>1){
        res[v[v.size()-2].second]= "Silver Medal";
        }
        if (v.size()>2){
        res[v[v.size()-3].second]= "Bronze Medal";
        }
        int j =4;
        for (int i = v.size()-4; i >=0; i--){
            res[v[i].second]= to_string (j);
            j++;
        }
        return res;
    }
int main()
{
    vector <int> nums1 = {5,4,3,2,1};
    vector <string> res =findRelativeRanks (nums1);
    for (int i =0; i < res.size(); i++){
        cout << res[i]<< " ";
    }
    return 0;
}