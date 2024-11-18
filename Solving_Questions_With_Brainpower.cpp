#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
    long long tinhtoan (vector<vector<int>>& questions, int row, int currentBrain, vector<long long> &m){
        if (row > questions.size()-1){
            return 0;
        }
        if (row == questions.size()-1){
            if (currentBrain ==0){
                return static_cast<long long>(questions[questions.size()-1][0]);
            }
            else{
                return 0;
            }
        }
        else{
            if (currentBrain ==0){
                if (m[row]!= -INT_MAX){
                    return static_cast<long long>(m[row]);
                }
                else{
                    long long get = max (questions[row][0]+tinhtoan(questions, row+1, currentBrain-questions[row][1],m), tinhtoan(questions, row+1, currentBrain,m));
                    m[row]= get;
                    return get;
                }
            }
            else{
                long long get =tinhtoan(questions, row+abs(currentBrain), 0,m);
                return static_cast<long long>(get);
            
            }
        }
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> m (questions.size(), -INT_MAX);
        long long a =(tinhtoan (questions,0,0,m));
        return a;
        
    }
int main()
{
    vector <vector<int>> v = {{1,1},{2,2},{3,3},{4,4},{5,5}};
    cout << mostPoints (v);
    return 0;
}