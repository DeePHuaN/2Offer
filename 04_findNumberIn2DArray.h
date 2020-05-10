#ifndef INC_03_04_FINDNUMBERIN2DARRAY_H
#define INC_03_04_FINDNUMBERIN2DARRAY_H

#include <vector>
using namespace std;


class Solution04 {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        /* 线性查找 , 空间0， 时间O(mn)*/
        if(matrix.size()==0 || matrix[0].size()==0)
        {
            return false;
        }

        int row=0, rows = matrix.size(), columns = matrix[0].size() , column = columns-1;

        while(row<rows && column>=0)
        {
            if(matrix[row][column] == target) return true;
            if(matrix[row][column] > target) column--;
            else row++;
        }

        return false;

    }
};



#endif
