class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        preview = {}
        for i,n in enumerate(numbers):
            diff = target - n 
            if diff in preview : 
                return [preview[diff]+1 , i+1]
            preview[n] = i