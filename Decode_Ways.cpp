/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int generate (string &s, int current, map <int, int> &m){
        if (current == s.length()){
            return 1;
        }
        if (current == s.length()-1){
            if ((s[current]- '0')== 0){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if (current > s.length()-1){
            return 0;
        }
        else{
            if (m.find (current)!= m.end()){
                return m[current];
            }
            else{
                int currentNum= s[current]- '0';
                cout << "CurrentNum "<< currentNum << endl;
                if (currentNum ==0){
                    m.insert ({current, 0});
                    return 0;
                }
                else if (currentNum >= 3){
                    int total = generate (s, current+1, m);
                    m.insert ({current, total});
                    return total;
                }
                else{
                    if (currentNum != 2){
                        int total = generate (s, current+1, m)+ generate (s, current+2, m);
                        m.insert ({current, total});
                        return total;
                    }
                    else{
                        int nextChar = s[current+1]- '0';
                        if (nextChar <=6){
                            int total = generate (s, current+1, m)+ generate (s, current+2, m);
                            m.insert ({current, total});
                            cout << "Total "<< total<< " of nextChar " << nextChar<< endl;
                            return total;
                        }
                        else{
                            int total = generate (s, current+1, m);
                            m.insert ({current, total});
                            return total;
                        }
                    }
                }

            }
        }
    }
    int numDecodings(string s) {
        map <int, int> m;
        return generate (s, 0,m);
    }
int main()
{
    string s= "226";
    cout << numDecodings (s);
    return 0;
}