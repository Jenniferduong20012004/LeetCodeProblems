/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector < vector<string>> res;
        map <string, vector<string>> m;
        for (int i =0; i < strs.size(); i++){
            vector <string> v;
            v.push_back(strs[i]);
            string a = strs[i];
            sort (a.begin(), a.end());
            m[a].push_back(strs[i]);
        }
        for (map <string, vector<string>>:: iterator i = m.begin(); i != m.end(); i++){
            res.push_back(i->second);
        }
        return res;
    }
int main()
{
    vector <string> s= {"224", "422"};
    vector <vector<string>> r = groupAnagrams(s);
    return 0;
}