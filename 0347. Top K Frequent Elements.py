'''
Runtime: 134 ms. Beats 10.59%.
Memory: 22.1 MB. Beats 7.23%.
'''
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        elemsDict = {}

        for element in nums:
            elemsDict[element] = elemsDict.get(element, 0) + 1
        
        # {1: 3, 2: 2, 3: 1}
        frequencies = [[] for i in range(len(nums) + 1)]

        # [[], [3], [2], [1], [], [], []]
        for n, freq in elemsDict.items():
            frequencies[freq].append(n)
            
        result = []
        for i in range(len(frequencies) - 1, -1, -1):
            for n in frequencies[i]:
                result.append(n)

                if (k == len(result)):
                    return result
                    break