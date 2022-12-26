'''
Runtime: 78 ms. Beats 79.76%.
Memory: 15.6 MB. Beats 9.31%.
'''
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        tuples = []
        for i in range(len(nums)):
            tuples.append([nums[i], i])
        
        tuples.sort()

        first = 0
        second = len(tuples) - 1

        while first < second:
            sum_ = tuples[first][0] + tuples[second][0]
            if sum_ == target:
                return [tuples[first][1], tuples[second][1]]
            elif sum_ > target:
                second -= 1
            else:
                first += 1



'''
Runtime: 3843 ms. Beats 18.73%.
Memory: 14.8 MB. Beats 95.49%.
'''
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        for i in range(len(nums) - 1):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]