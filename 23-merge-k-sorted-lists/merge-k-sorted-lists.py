# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
import heapq
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if not lists:
            return ListNode().next
        heap = []
        counter = 0  # to prevent comparison of ListNode when values are equal
        for node in lists:
            if not node:
                continue
            heapq.heappush(heap, (node.val, counter, node))
            counter += 1

        dummy = ListNode()
        current = dummy

        while heap:
            val, _, node = heapq.heappop(heap)
            current.next = node
            current = current.next
            if node.next:
                heapq.heappush(heap, (node.next.val, counter, node.next))
                counter += 1

        return dummy.next     