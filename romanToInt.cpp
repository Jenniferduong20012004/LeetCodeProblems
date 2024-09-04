/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
using namespace std;
int romanToInt(string s) {
        map <string, int> m;
        m.insert (pair <string, int> ("I", 1));
        m.insert (pair <string, int> ("V", 5));
        m.insert (pair <string, int> ("X",10));
        m.insert (pair <string, int> ("L", 50));
        m.insert (pair <string, int> ("C", 100));
        m.insert (pair <string, int> ("D", 500));
        m.insert (pair <string, int> ("M", 1000));
        int result =0;
        vector <int > res;
        for (int i =0; i < s.size(); i ++){
            int a = m.at (std:: string (1, s[i]));
            if (res.empty()){
                res.push_back(a);
            }
            else{
                if (res[res.size()-1]> a){
                    res.push_back(a);
                }
                else if (res[res.size()-1]== a){
                    res[res.size()-1]+= a;
                }
                else{
                    res[res.size()-1]= a-res[res.size()-1];
                }
            }
            
        }
        for (int i =0; i < res.size(); i++){
            result += res[i];
        }
        return result;
    }
int main()
{
    string c;
    cin >> c;
    cout <<romanToInt(c);

    return 0;
}