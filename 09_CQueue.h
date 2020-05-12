#ifndef INC_03_09_CQUEUE_H
#define INC_03_09_CQUEUE_H

#include <stack>
using namespace std;

class CQueue {

    /* 两个栈，一个存储，一个辅助。 **删除时候往存储栈里放入元素
     * 插入元素 时间复杂度O(1),空间复杂度O(1)
     * 删除元素 时间复杂度O(N),空间复杂度O(N)
     * */

    stack<int> *mystack1, *mystack2;
public:
    CQueue() {
        mystack1 = new stack<int>();
        mystack2 = new stack<int>();
    }

    void appendTail(int value) {
        mystack1->push(value);
    }

    int deleteHead() {
        if(mystack1->empty()) return -1;
        int tmp;
        while(!mystack1->empty())
        {
            tmp = mystack1->top();
            mystack1->pop();
            mystack2->push(tmp);
        }

        int result = mystack2->top();
        mystack2->pop();

        while(!mystack2->empty())
        {
            tmp = mystack2->top();
            mystack2->pop();
            mystack1->push(tmp);
        }

        return result;
    }
};



#endif //INC_03_09_CQUEUE_H
