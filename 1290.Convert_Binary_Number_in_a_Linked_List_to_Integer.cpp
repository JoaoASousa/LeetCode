/*
Runtime: 4 ms, faster than 59.66% of C++ online submissions for Convert Binary Number in a Linked List to Integer.
Memory Usage: 8.5 MB, less than 100.00% of C++ online submissions for Convert Binary Number in a Linked List to Integer.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> results;
        int result = 0;
        while(true) {
            
            results.insert(results.begin(), head->val);
            if (head->next == NULL) break;
            head = head->next;
        }
       
        for (int i = 0; i < results.size(); ++i) {
            result += results.at(i) * pow(2, i);
        }
        return result;
    }
};