#include <iostream>
#include <vector>
using namespace std;
int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
int main()
{
    string hay = "quynhnhuandtrongpham";
    string fi = "quy";
    cout << strStr(hay, fi);

    return 0;
}