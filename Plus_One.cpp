/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        int temp =1;
        for (int i = digits.size()-1; i >=0; i--){
            int n = digits[i]+temp;
            if (n <=9){
                digits[i]= n;
                temp =0;
                break;
            }
            else{
                temp =1;
                n =0;
                digits[i]= n;
            }
        }
        if (temp ==1){
            digits.insert (digits.begin(), 1);
        }
        return digits;

    }
int main()
{
    vector <int> v = {1,3,2,4,9};
    plusOne (v);
    for (int i =0; i < v.size(); i++){
        cout << v[i]<< " ";
    }
}