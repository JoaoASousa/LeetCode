'''
Runtime: 44 ms. Beats 92.20%.
Memory: 15.7 MB. Beats 16.50%.
'''
class Solution:
    def isPalindrome(self, s: str) -> bool:

        alpNum = re.sub(r'[^a-zA-Z0-9]', '', s.lower())

        return alpNum == alpNum[::-1]


'''
Runtime: 51 ms. Beats 80.44%.
Memory: 15.6 MB. Beats 16.50%.
'''
class Solution:
    def isPalindrome(self, s: str) -> bool:

        alphanumeric = re.sub(r'[^a-zA-Z0-9]', '', s.lower())
        l = list(alphanumeric)
        l_len = len(l)

        for i in range(0, (int)(l_len / 2)):
            if (alphanumeric[i] != alphanumeric[l_len - 1 - i]):
                return False

        return True