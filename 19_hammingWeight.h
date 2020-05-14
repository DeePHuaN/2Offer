#ifndef INC_03_19_HAMMINGWEIGHT_H
#define INC_03_19_HAMMINGWEIGHT_H

#include <string>

using namespace std;

class Solution19 {
public:
    int hammingWeight(uint32_t n) {
        /* 移位运算，时间复杂度O(logN),逐位判断需循环logNlogn 次，其中 logN代表数字N最高位1的所在位数,
         * 空间复杂度O(1)*/
        int result=0;
        while(n != 0)
        {
            result += n&1;
            n >>= 1;
        }
        return result;
    }
};




#endif
