/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
bool isIsomorphic(string s, string t) {
        map <char, char> m;
        map <char, char> m2;
        if (s.size() != t.size()){
            return false;
        }
        for (int i = 0; i < s.size(); i++){
            if (m.find(s[i]) == m.end()&& m2.find(t[i])== m2.end()){
                m.insert (pair<char, char>(s[i], t[i]));
                m2.insert(pair<char, char>(t[i], s[i]));
            }
            else if (m.find(s[i]) != m.end()&& m2.find(t[i])== m2.end()){
               return false;
            }
            else if (m.find(s[i]) == m.end()&& m2.find(t[i])!= m2.end()){
                return false;
            }

            if (m.at(s[i]) != t[i] || m2.at (t[i])!= s[i]){
                return false;
            }
        }
        return true;
    }
int main()
{
    string a = "foo";
    string b = "add";
    bool c = isIsomorphic(a,b);
    cout << c;

    return 0;
}