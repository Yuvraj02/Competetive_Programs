#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){

    vector<vector<int>> vec= {{1,2,3},{4,5,6},{9,8,9}};

    int leftDiagonalSum = 0, rightDiagonalSum = 0;

    for (int i = 0,j=vec.size()-1; i < vec.size(); i++)
    {
        leftDiagonalSum += vec[i][i];
        rightDiagonalSum += vec[i][j];
        j--;
    }
    
    cout<<abs(leftDiagonalSum-rightDiagonalSum);
    return 0;
}