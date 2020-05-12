#ifndef INC_03_11_MINARRAY_H
#define INC_03_11_MINARRAY_H

#include <vector>

using namespace std;

class Solution11 {
public:
    int minArray(vector<int>& numbers) {
        //最简单遍历, 时间复杂度O(N)

        /* 二分查找，时间复杂度O(logN)，空间复杂度O(1)
         * 二分法明确边界与循环条件*/
        int left=0, right = numbers.size()-1;
        while(right>left)
        {
            int mid = (left+right) /2;
            if(numbers[mid] > numbers[right]) left=mid+1;
            else if(numbers[mid] < numbers[right]) right=mid;
            else right--;
        }
        return numbers[left];
    }
};


#endif
