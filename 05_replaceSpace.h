#ifndef INC_03_05_REPLACESPACE_H
#define INC_03_05_REPLACESPACE_H

/*
 * 请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
 *
 * 输入：s = "We are happy."
 * 输出："We%20are%20happy."
 */

#include <string>

using namespace std;

class Solution05 {
public:
    string replaceSpace(string s) {

        /* C++字符串特性，搜索-连接，时间复杂度O(N),空间复杂度O(N) */

        string tmp;

        for(int i=0; i<s.size(); i++)
        {
            if (s[i] == ' ')
            {
                tmp += "%20";
            }
            else
            {
                tmp += s[i];
            }
        }

    return tmp;
    }
};


#endif
