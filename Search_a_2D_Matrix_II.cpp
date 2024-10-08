#include <iostream>
#include <vector>
#include <map>
using namespace std;
bool find(vector<vector<int>>& matrix, int target, int lowngang, int highngang, int lowdoc, int highdoc) {
    if (lowngang > highngang || lowdoc > highdoc) {
        return false;
    }
    if (lowngang == highngang && lowdoc == highdoc) {
        return matrix[lowdoc][lowngang] == target;
    }
    int midngang = lowngang + (highngang - lowngang) / 2;
    int middoc = lowdoc + (highdoc - lowdoc) / 2;
    if (matrix[middoc][midngang] == target) {
        return true;
    } else if (matrix[middoc][midngang] > target) {
        return find(matrix, target, lowngang, midngang - 1, lowdoc, middoc - 1) || 
               find(matrix, target, lowngang, midngang - 1, middoc, highdoc) ||     
               find(matrix, target, midngang, highngang, lowdoc, middoc - 1);     
    } else {
        return find(matrix, target, midngang + 1, highngang, middoc + 1, highdoc) || 
               find(matrix, target, lowngang, midngang, middoc + 1, highdoc) ||      
               find(matrix, target, midngang + 1, highngang, lowdoc, middoc);     
    }
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;
    return find(matrix, target, 0, matrix[0].size() - 1, 0, matrix.size() - 1);
}

int main()
{
    vector<vector <int>> v = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout << majorityElement(v)<< endl;

    return 0;
}

