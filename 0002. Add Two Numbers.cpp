/*
Runtime: 24 ms, faster than 66.10% of C++ online submissions for Add Two Numbers.
Memory Usage: 11.2 MB, less than 5.14% of C++ online submissions for Add Two Numbers.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // 2 4 3 -> 342
        // 5 6 4 -> 465
        // 7 0 8 -> 807
        
        int carry = 0;
        vector<ListNode *>nodes;
        
        if (l1 != NULL && l2 != NULL) {
            while ( (l1 != NULL) && (l2 != NULL) ) {
            
            nodes.push_back(new ListNode( (l1->val + l2->val + carry) % 10));
            
            if (l1->val + l2->val + carry > 9) carry = 1;
            else carry = 0;
            
            l1 = l1->next;
            l2 = l2->next;
            }
        }
        
        // If the lists have different sizes
        if (l1 != NULL) {
            while(l1 != NULL) {
               nodes.push_back(new ListNode( (l1->val + carry) % 10));
                if (l1->val + carry > 9) carry = 1;
                else carry = 0; 
                
                l1 = l1->next;
            }
        }
        else if (l2 != NULL) {
            while (l2 != NULL) {
                nodes.push_back(new ListNode( (l2->val + carry) % 10));
                if (l2->val + carry > 9) carry = 1;
                else carry = 0;
                
                l2 = l2->next;
            } 
        }
        
        if (carry == 1) nodes.push_back(new ListNode(carry));
        
        for (size_t i = 0; i < nodes.size() - 1; ++i) {
            nodes[i]->next = nodes[i+1];
        }
        
        return nodes[0];
    }
};


/*
Runtime: 28 ms, faster than 32.13% of C++ online submissions for Add Two Numbers.
Memory Usage: 11.3 MB, less than 5.14% of C++ online submissions for Add Two Numbers.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // 2 4 3 -> 342
        // 5 6 4 -> 465
        // 7 0 8 -> 807
        
        int carry = 0;
        vector<ListNode *>nodes;
        bool root = true;
        
        while ( (l1 != NULL) && (l2 != NULL) ) {
            if (root) {
                root = false;
            }
            nodes.push_back(new ListNode( (l1->val + l2->val + carry) % 10));
            
            if (l1->val + l2->val + carry > 9) carry = 1;
            else carry = 0;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        // If the lists have different sizes
        if (l1 != NULL) {
            while(l1 != NULL) {
               nodes.push_back(new ListNode( (l1->val + carry) % 10));
                if (l1->val + carry > 9) carry = 1;
                else carry = 0; 
                
                l1 = l1->next;
            }
        }
        else if (l2 != NULL) {
            while (l2 != NULL) {
                nodes.push_back(new ListNode( (l2->val + carry) % 10));
                if (l2->val + carry > 9) carry = 1;
                else carry = 0;
                
                l2 = l2->next;
            }
            
        }
        
        
        if (carry == 1) {
            nodes.push_back(new ListNode(carry));
        }
        
        
        
        for (size_t i = 0; i < nodes.size() - 1; ++i) {
            nodes[i]->next = nodes[i+1];
        }
        
        return nodes[0];
    }
};


/*
Runtime: 36 ms, faster than 5.36% of C++ online submissions for Add Two Numbers.
Memory Usage: 11.3 MB, less than 5.14% of C++ online submissions for Add Two Numbers.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // 2 4 3 -> 342
        // 5 6 4 -> 465
        // 7 0 8 -> 807
        
        int carry = 0;
        vector<ListNode *>nodes;
        
        while ( (l1 != NULL) && (l2 != NULL) ) {
            nodes.push_back(new ListNode( (l1->val + l2->val + carry) % 10));
            
            if (l1->val + l2->val + carry > 9) carry = 1;
            else carry = 0;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        // If the lists have different sizes
        while (l1 != NULL) {
            nodes.push_back(new ListNode( (l1->val + carry) % 10));
            if (l1->val + carry > 9) carry = 1;
            else carry = 0; 
                
            l1 = l1->next;
        }

        
        while (l2 != NULL) {
            nodes.push_back(new ListNode( (l2->val + carry) % 10));
            if (l2->val + carry > 9) carry = 1;
            else carry = 0;
                
            l2 = l2->next;
        }

        
        if (carry == 1) {
            nodes.push_back(new ListNode(carry));
        }
        
        for (size_t i = 0; i < nodes.size() - 1; ++i) {
            nodes[i]->next = nodes[i+1];
        }
        
        return nodes[0];
    }
};