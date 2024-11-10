/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <climits>
#include <map>
using namespace std;
vector<int> gen (int n, map<int, vector<int>> &m){
        if (n==0){
            vector <int> v = {1};
            return v;
        }
        else{
            if (m.find (n) != m.end()){
                return m[n];
            }
            else{
                vector <int> v;
                v.push_back (1);
                for (int i = 1; i <n; i++){
                    int n1 = gen (n-1, m)[i-1]+ gen (n-1,m)[i];
                    v.push_back (n1);
                }
                v.push_back (1);
                m.insert ({n, v});
                return v;
            }
        }
    }
    vector<int> getRow(int rowIndex) {
        vector <vector <int>> res;
        map <int, vector <int>> m;
        for (int i = 0; i <= rowIndex; i++){
            vector <int> v = gen (i, m);
            res.push_back (v);
        }
        return res[rowIndex];
    }
int main()
{
    vector <int> v =getRow (5);
    for (int i =0; i < v.size(); i++){
        cout << v[i]<< " ";
    }
    return 0;
}