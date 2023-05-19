'''
Runtime: 104 ms. Beats 54.79%.
Memory: 16.3 MB. Beats 15.83%.
'''
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        rows = [[] for i in range(9)]
        columns = [[] for i in range(9)]
        boxes = collections.defaultdict(set)

        for i in range(9):
            for j in range(9):
                if (board[i][j] == "."):
                    continue

                if (board[i][j] in rows[i] or board[i][j] in columns[j] or board[i][j] in boxes[(i // 3, j // 3)]):
                    return False

                rows[i].append(board[i][j])
                columns[j].append(board[i][j])
                boxes[(i // 3, j // 3)].add(board[i][j])

        return True


'''
Runtime: 118 ms. Beats 27.65%.
Memory: 16.4 MB. Beats 15.83%.
'''
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        rows = [[] for i in range(9)]
        columns = [[] for i in range(9)]
        boxes = collections.defaultdict(set)

        for i in range(9):
            for j in range(9):
                if (board[i][j] != "."):
                    if (board[i][j] not in rows[i]):
                        rows[i].append(board[i][j])
                    else:
                        return False

                if (board[j][i] != "."):
                    if (board[j][i] not in columns[i]):
                        columns[i].append(board[j][i])
                    else:
                        return False

                if (board[i][j] != "."):
                    if (board[i][j] not in boxes[(i // 3, j // 3)]):
                        boxes[(i // 3, j // 3)].add(board[i][j])
                    else:
                        return False

        # print(rows)
        # print(columns)
        # print(boxes)
            
        return True