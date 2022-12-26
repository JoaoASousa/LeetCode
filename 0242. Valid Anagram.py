'''
Runtime: 43 ms. Beats 95.90%.
Memory: 14.5 MB. Beats 67.46%.
'''
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if (len(s) != len(t)): return False

        s_dict = dict()
        t_dict = dict()

        for s_letter, t_letter in zip(s, t):
            if s_letter in s_dict:
                s_dict[s_letter] += 1
            else:
                s_dict[s_letter] = 1
            
            if t_letter in t_dict:
                t_dict[t_letter] += 1
            else:
                t_dict[t_letter] = 1
        
        return s_dict == t_dict

'''
Runtime: 52 ms. Beats 87.62%.
Memory: 15 MB. Beats 21.89%.
'''
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)
        