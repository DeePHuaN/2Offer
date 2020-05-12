#ifndef INC_03_10_1_FIB_H
#define INC_03_10_1_FIB_H

#include <vector>

using namespace std;

class Solution10_1 {
public:
    int fib(int n) {

        // 递归超时
        if(n==0) return 0;
        if(n==1) return 1;
        //return (fib(n-1) + fib(n-2)) % 1000000007;

        /* 迭代,额外数组存储 ,时间复杂度O(N), 空间复杂度O(N) */
        vector<int> tmp(n+1,0);
        tmp[1] = 1;
        for(int i=2; i<=n; i++)
        {
            tmp[i] = (tmp[i-1] + tmp[i-2]) % 1000000007;
        }
        return tmp[n];
    }
};


#endif //INC_03_10_1_FIB_H
