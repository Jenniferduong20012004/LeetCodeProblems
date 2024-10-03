/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int step (int n, map<int, int> &m){
    if (n ==1){
        return 1;
    }
    else if (n ==2){
        return 2;
    }
    else{
        if (m.find (n)!= m.end()){
            return m[n];
        }
        else{
            m[n]= step (n-1,m)+ step (n-2,m);
            return m[n];
        }
    }
}
    int climbStairs(int n) {
        map <int, int> m;
    int res = step (n, m);
    return res;
    }

int main()
{
    int s;
    cin >> s;
    int res = climbStairs (s);
    cout << res;
    return 0;
}