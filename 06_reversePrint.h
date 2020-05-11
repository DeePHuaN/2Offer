#ifndef INC_03_06_REVERSEPRINT_H
#define INC_03_06_REVERSEPRINT_H

#include <vector>
#include <stack>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){};
};


class Solution06 {
public:
    vector<int> reversePrint(ListNode* head) {

        /* ① 利用vector，时间复杂度O(N),空间复杂度O(N) */
//        vector<int> result;
//        if(head == NULL) return result;
//        while(head != NULL)
//        {
//            result.push_back(head->val);
//            head = head->next;
//        }
//        reverse(result.begin(),result.end());

        // return result;

        /* ② 利用 栈 特性 ，时间复杂度O(N),空间复杂度O(N) */
        stack<ListNode *> myStack;

        while(head != NULL)
        {
            myStack.push(head);
            head = head->next;
        }

        ListNode *tmp = NULL;
        vector<int> result;

        while (!myStack.empty())
        {
            tmp = myStack.top();
            result.push_back(tmp->val);
            myStack.pop();
        }
        return result;
    }
};


#endif //INC_03_06_REVERSEPRINT_H
