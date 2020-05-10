#ifndef INC_03_03_FINDREPEATNUMBER_H
#define INC_03_03_FINDREPEATNUMBER_H

#include <vector>
#include <unordered_map>

class Solution03{
public:
    int findRepeatNumber(std::vector<int> &nums)
    {
        /* 哈希表 , 时间O(N) , 空间 O(N) */
        std::unordered_map<int,int> tmp;

        for(int i=0; i<nums.size(); i++)
        {
            if(++tmp[nums[i]]>1)
            {
                return nums[i];
            }
        }
        return -1;

        /* */

    }
};

#endif
