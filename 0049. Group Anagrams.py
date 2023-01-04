'''
Runtime: 171 ms. Beats 51.51%.
Memory: 17.7 MB. Beats 65.37%.
'''
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        anagrams = {}

        for word in strs:
            sorted_word = "".join(sorted(word))
            if (sorted_word in anagrams):
                anagrams[sorted_word].append(word)
            else:
                anagrams[sorted_word] = [word]
            
        return anagrams.values()



'''
Runtime: 234 ms. Beats 36.29%.
Memory: 18.3 MB. Beats 45.79%.
'''
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        anagrams = {}

        for word in strs:
            sorted_word = "".join(sorted(word))
            if (sorted_word in anagrams):
                anagrams[sorted_word].append(word)
            else:
                anagrams[sorted_word] = [word]
            
        return [[value for value in anagrams[key]] for key in anagrams.keys()]