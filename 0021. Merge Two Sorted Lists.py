'''
Runtime: 58 ms. Beats 19.96%.
Memory: 16.4 MB. Beats 35.38%.
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        current = root = ListNode()

        while list1 and list2:
            if list1.val < list2.val:
                current.next = list1
                current = current.next
                list1 = list1.next
            else:
                current.next = list2
                current = current.next
                list2 = list2.next

        if list1 or list2:
            current.next = list1 if list1 else list2

        return root.next