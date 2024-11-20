

#include <iostream>
#include <map>
#include <vector>
#include <climits>
#include <string>
using namespace std;
bool isSubsequence(string s, string t) {
        int indexS =0, indexT =0;
        while (indexS < s.length() && indexT< t.length()){
            if (s[indexS]== t[indexT]){
                indexS++;
            }
            indexT++;
        }
        if (indexS == s.length()){
            return true;
        }
        return false;
    }
int main()
{
    string s = "axc";
    string t = "aexdvc";
    cout << isSubsequence (s,t);

    return 0;
}