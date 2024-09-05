#include <iostream>
#include <vector>
#include <map>
using namespace std;
int dayOfYear(string date) {
        int year = stoi(date.substr (0, 4));
        int month = stoi (date.substr(5,2));
        int day = stoi (date.substr(8,2));
        map <int, int> m;
        m.insert (pair<int, int> (1,31));
        m.insert (pair<int, int> (3,31));
        m.insert (pair<int, int> (5,31));
        m.insert (pair<int, int> (7,31));
        m.insert (pair<int, int> (8,31));
        m.insert (pair<int, int> (10,31));
        m.insert (pair<int, int> (12,31));
        m.insert (pair<int, int> (4,30));
        m.insert (pair<int, int> (6,30));
        m.insert (pair<int, int> (9,30));
        m.insert (pair<int, int> (11,30));
        if (year %100 ==0){
            if (year%400 ==0){
                m.insert (pair<int, int> (2,29));
            }
            else{
                m.insert (pair<int, int> (2,28));
            }
        }
        else{
            if (year %4==0){
                m.insert (pair<int, int> (2,29));
            }
            else{
                m.insert (pair<int, int> (2,28));
            }
        }

    for (int i =1; i < month; i++){
        day += m.at(i);
    }
    return day;
    }
int main()
{
    string hay = "2024-09-05";
    cout << dayOfYear(hay);

    return 0;
}