/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
#include <vector>
using namespace std;
int tinhtoan (int current, map <int,int> &m){
        if (current == 0){
            return 0;
        }
        else if (current ==1){
            return 1;
        }
        else{
            if (m.find (current)!= m.end()){
                return m[current];
            }
            else{
                m[current] = tinhtoan (current-1,m)+tinhtoan (current-2,m);
                return m[current];
            }
        }
    }
    int fib(int n) {
        map <int, int> m;
        return tinhtoan (n, m);
    }
int main()
{
    std::cout<<fib (5);

    return 0;
}