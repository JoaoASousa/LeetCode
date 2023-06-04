'''
Runtime: 66 ms. Beats 53.10%.
Memory: 16.5 MB. Beats 14.61%.
'''
class Solution:
    def judgeCircle(self, moves: str) -> bool:
        l = list(moves)
        if (len(l) % 2):
            return False

        return (l.count('U') == l.count('D')) and (l.count('L') == l.count('R'))

'''
Runtime: 82 ms. Beats 22.19%.
Memory: 16.4 MB. Beats 44.8%.
'''
class Solution:
    def judgeCircle(self, moves: str) -> bool:
        x = 0
        y = 0
        for letter in moves:
            x = x + 1 if (letter == "R") else x - 1 if (letter == "L") else x
            y = y + 1 if (letter == "U") else y - 1 if (letter == "D") else y

        return x == 0 and y == 0