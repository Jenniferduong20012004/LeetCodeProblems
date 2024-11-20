#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;
    bool tinhtoan (int start, set <string> &word, vector <int> &m, string s ){
        if (start == s.length()){
            return true;
        }
        else{
            if (m[start] != INT_MIN){
                if (m[start]== 1){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                for (int j = start+1; j <= s.length(); j++ ){
                    if (word.find (s.substr (start, j- start)) != word.end()&& tinhtoan (j, word, m, s)){
                        m[start]= 1;
                        return true;
                    }
                }
                m[start] = 0;
                return false;
            }
         }
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set <string> word (wordDict.begin(), wordDict.end());
        vector <int> m (s.length(), INT_MIN);
        return tinhtoan (0, word, m, s);
    }
int main()
{
    vector <string> s = {"leet","code"};
    string a = "leetcode";
    cout <<wordBreak (a,s);

    return 0;
}